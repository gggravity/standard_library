#include <bits/stdc++.h>
#include <streambuf>
#include <locale>
#include <cstdio>
#include <unistd.h>

class fd_out_buffer : public std::streambuf
{
 public:
  explicit fd_out_buffer (int _fd) :
      fd(_fd)
  {

  }

 protected:
  int fd;

  virtual int_type overflow (int_type c)
  {
    if (c != EOF)
      {
        char z = c;
        if (write(fd, &z, 1))
          {
            return EOF;
          }
      }
    return c;
  }

  virtual std::streamsize xsputn (const char *s, std::streamsize num)
  {
    return write(fd, s, num);
  }
};

class fd_ostream : public std::ostream
{
 public:
  explicit fd_ostream (int fd) :
      std::ostream(nullptr), buf(fd)
  {
    rdbuf(&buf);
  }

 protected:
  fd_out_buffer buf;
};
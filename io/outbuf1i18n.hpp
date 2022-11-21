#pragma once

#include <bits/stdc++.h>

using namespace std;

template < typename char_t, typename traits = char_traits<char_t> >
class out_buffer : public std::streambuf
{
 protected:
  virtual typename traits::int_type overflow (typename traits::int_type c) override
  {
    if (!traits::eq_int_type(c, traits::eof()))
      {
        c = std::toupper(c, this->getloc());

        char cc = use_facet<ctype<char_t>>(this->getloc()).narrow(c, '?');

        if (std::putchar(cc) == EOF)
          {
            return traits::eof();
          }
      }
    return traits::not_eof(c);
  }
};
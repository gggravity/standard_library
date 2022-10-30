//
// Created by martin on 10/30/22.
//

#include <memory>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <cstring>
#include <cerrno>
#include <string>
#include <iostream>

#define FILENAME "/tmp123"

using namespace std;

struct Shared_memory_detacher
{
    void operator() (int *p)
    {
      cout << "unlink " << FILENAME << endl;
      if (shm_unlink(FILENAME) != 0)
        {
          cerr << "OOPS: shm_unlink() failed" << endl;
        }
    }
};

auto get_shared_int_memory (int num)
{
  void *mem;
  int shmfd = shm_open(FILENAME, O_CREAT | O_RDWR, S_IRWXU | S_IRWXG);

  if (shmfd < 0)
    {
      throw runtime_error(string(strerror(errno)));
    }
  if (ftruncate(shmfd, num * sizeof(int)) == -1)
    {
      throw runtime_error(string(strerror(errno)));
    }

  mem = mmap(nullptr, num * sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED, shmfd, 0);
  if (mem == MAP_FAILED)
    {
      throw runtime_error(string(strerror(errno)));
    }
  return shared_ptr<int>(static_cast<int *>(mem), Shared_memory_detacher());
}

int main ()
{
  auto smp { get_shared_int_memory(100) };

  for (int i { } ; i < 100 ; ++i)
    {
      smp.get()[i] = i * 42;
    }

  cout << "<return>" << endl;
  cin.get();

  smp.reset();

}
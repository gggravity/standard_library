#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

void print_file_twice (const char *filename)
{
  ifstream file { filename };

  cout << file.rdbuf();

  file.seekg(0);

  cout << file.rdbuf();
}

int main (int argc, char *argv[])
{
  for (int i { 1 } ; i < argc ; ++i)
    {
      print_file_twice(argv[i]);
    }
}
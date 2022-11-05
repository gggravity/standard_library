//
// Created by martin on 11/5/22.
//

#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  istringstream iss{"1 2 3 f 4"};

  istream_iterator<int> int_reader(iss);

  istream_iterator<int> int_reader_EOF;

  while(int_reader != int_reader_EOF)
    {
      cout << "once:       " << *int_reader << endl;
      cout << "once again: " << *int_reader << endl;
      ++int_reader;
    }
}

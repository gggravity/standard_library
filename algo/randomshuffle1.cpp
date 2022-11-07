//
// Created by martin on 11/7/22.
//
#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

struct My_random
{
    ::ptrdiff_t operator() (::ptrdiff_t max)
    {
      auto tmp { static_cast<double >(rand()) / static_cast<double > (RAND_MAX) };
      return static_cast<::ptrdiff_t >(tmp * max);
    }
};

int main ()
{
  vector<int> coll;

  INSERT_ELEMENTS(coll, 1, 9);
  PRINT_ELEMENTS(coll);

  My_random rd;
  // random_shuffle is depreciated
  random_shuffle(coll.begin(), coll.end(), rd);
  PRINT_ELEMENTS(coll);
}

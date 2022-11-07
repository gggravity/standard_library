//
// Created by martin on 11/7/22.
//
#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

int main ()
{
  deque<int> coll;

  INSERT_ELEMENTS(coll, 3, 7);
  INSERT_ELEMENTS(coll, 2, 6);
  INSERT_ELEMENTS(coll, 1, 5);
  PRINT_ELEMENTS(coll);

//  partial_sort(coll.begin(),
//               coll.begin() + 5,
//               coll.end());
//  PRINT_ELEMENTS(coll);
//
//  partial_sort(coll.begin(),
//               coll.begin() + 5,
//               coll.end(),
//               greater { });
//  PRINT_ELEMENTS(coll);
//
//  partial_sort(coll.begin(),
//               coll.begin() + 5,
//               coll.end());
//  PRINT_ELEMENTS(coll);

  partial_sort(coll, coll.begin() + 5);
  PRINT_ELEMENTS(coll);

  partial_sort(coll, coll.begin() + 5, greater { });
  PRINT_ELEMENTS(coll);

  partial_sort(coll, coll.begin() + 5);
  PRINT_ELEMENTS(coll);
}
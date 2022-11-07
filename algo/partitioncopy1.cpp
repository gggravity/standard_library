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
  vector<int> coll { 1, 6, 33, 7, 22, 4, 11, 33, 2, 7, 0, 42, 5 };
  PRINT_ELEMENTS(coll);

  vector<int> even_coll;
  vector<int> odd_coll;

  partition_copy(coll,
                 back_inserter(even_coll),
                 back_inserter(odd_coll),
                 [] (int element)
                 {
                     return element % 2 == false;
                 });

  PRINT_ELEMENTS(even_coll);
  PRINT_ELEMENTS(odd_coll);
}

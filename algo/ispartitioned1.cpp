//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

int main ()
{
  vector<int> collection { 5, 3, 9, 1, 3, 4, 8, 2, 6 };
  PRINT_ELEMENTS(collection);

  auto is_odd { [] (int element)
                {
                    return element % 2 == true;
                } };

  if (is_partitioned(collection, is_odd))
    {
      cout << "coll is partitioned" << endl;

      auto pos { partition_point(collection, is_odd) };
      cout << "first even element: " << *pos << endl;
    }
  else
    {
      cout << "coll is not partitioned" << endl;
    }
}
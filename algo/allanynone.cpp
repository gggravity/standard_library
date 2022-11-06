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
  vector<int> collection;
  INSERT_ELEMENTS(collection, 1, 9);
  PRINT_ELEMENTS(collection);

  auto is_even { [] (int element)
                 {
                     return element % 2 == false;
                 } };

  cout << boolalpha;

  cout << "all even? " << all_of(collection, is_even) << endl;
  cout << "any even? " << any_of(collection, is_even) << endl;
  cout << "none even? " << none_of(collection, is_even) << endl;
}
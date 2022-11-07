//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;
using namespace placeholders;

int main ()
{
  list<int> collection;
  INSERT_ELEMENTS(collection, 2, 6);
  INSERT_ELEMENTS(collection, 4, 9);
  PRINT_ELEMENTS(collection);

  replace_copy(collection,
               ostream_iterator<int>(cout, " "),
               5, 55);
  cout << endl;

  replace_copy_if(collection,
                  ostream_iterator<int>(cout, " "),
                  bind(less<>(), _1, 5), 42);
  cout << endl;

  replace_copy_if(collection,
                  ostream_iterator<int>(cout, " "),
                  [] (int element)
                  {
                      return element % 2 == true;
                  }, 0);
  cout << endl;
}
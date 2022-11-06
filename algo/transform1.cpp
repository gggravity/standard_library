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
  vector<int> coll1;
  list<int> coll2;

  INSERT_ELEMENTS(coll1, 1, 9);
  PRINT_ELEMENTS(coll1);

  transform(coll1, coll1, negate<>());

  print_elements(coll1, "negated");

  transform(coll1, back_inserter(coll2),
            bind(multiplies<>(), _1, 10));

  print_elements(coll2, "*10");

  transform(coll2.crbegin(), coll2.crend(),
            ostream_iterator<int>(cout, " "),
            [] (int element)
            {
                return -element;
            });
}
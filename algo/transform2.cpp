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

  transform(coll1.cbegin(), coll1.cend(),
            coll1.cbegin(),
            coll1.begin(),
            multiplies<>());

  print_elements(coll1, "squared");

  transform(coll1.cbegin(), coll1.cend(),
            coll1.crbegin(),
            back_inserter(coll2),
            plus<>());

  PRINT_ELEMENTS(coll2);
  cout << "diff: ";
  transform(coll1.cbegin(), coll1.cend(),
            coll2.cbegin(),
            ostream_iterator<int>(cout, " "),
            minus<>());
}
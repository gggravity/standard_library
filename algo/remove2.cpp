//
// Created by martin on 11/7/22.
//
#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;
using namespace placeholders;

int main ()
{
  list<int> coll1;
  INSERT_ELEMENTS(coll1, 1, 6);
  INSERT_ELEMENTS(coll1, 1, 9);
  PRINT_ELEMENTS(coll1);

  remove_copy(coll1.begin(), coll1.end(),
              ostream_iterator<int>(cout, " "),
              3);
  cout << endl;

  remove_copy_if(coll1.cbegin(), coll1.cend(),
                 ostream_iterator<int>(cout, " "),
                 [] (int element)
                 {
                     return element > 4;
                 });
  cout << endl;

  multiset<int> coll2;
  remove_copy_if(coll1.begin(), coll1.end(),
                 inserter(coll2, coll2.end()),
                 bind(less<>(), _1, 4));
  PRINT_ELEMENTS(coll2);
}
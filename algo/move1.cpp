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
  vector<string> coll1 { "Hello", "this", "is", "an", "example" };
  list<string> coll2;

  copy(coll1, back_inserter(coll2));

  move(coll2, ostream_iterator<string>(cout, " "));
  cout << endl;

  move(coll1.crbegin(), coll1.crend(), coll2.begin());

  move(coll2, ostream_iterator<string>(cout, " "));
  cout << endl;

  PRINT_ELEMENTS(coll1);
  PRINT_ELEMENTS(coll2);
}
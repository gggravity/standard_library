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
  fill_n(ostream_iterator<float>(cout, " "), 10, 7.7);
  cout << endl;

  list<string> coll;
  fill_n(back_inserter(coll), 9, "hello");
  PRINT_ELEMENTS(coll);

  fill(coll, "again");
  PRINT_ELEMENTS(coll);
}
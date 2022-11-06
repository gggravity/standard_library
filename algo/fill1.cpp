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

  fill_n(coll.begin(), coll.size() - 2, "hi");
  PRINT_ELEMENTS(coll);

  auto pos1 {coll.begin()};
  auto pos2 {coll.end()};

  fill (++pos1, --pos2, "hmmm");
  PRINT_ELEMENTS(coll);
}
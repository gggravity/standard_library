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
  vector<int> coll;

  INSERT_ELEMENTS(coll, 1, 9);
  PRINT_ELEMENTS(coll);

  reverse(coll);
  PRINT_ELEMENTS(coll);

  reverse(coll.begin() + 1, coll.end() - 1);
  PRINT_ELEMENTS(coll);

  cout << terminal_colors::green("coll:  ");
  reverse_copy(coll.begin(), coll.end(),
               ostream_iterator<int>(cout, "  "));
  cout << endl;
}
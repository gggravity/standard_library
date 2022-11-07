//
// Created by martin on 11/7/22.
//
#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;
using namespace placeholders;

bool difference_one (int left, int right)
{
  return left + 1 == right || left - 1 == right;
}

int main ()
{
  int source[] { 1, 4, 4, 6, 1, 2, 2, 3, 1,
                 6, 6, 6, 5, 7, 5, 4, 4 };
  list<int> coll;

  copy(begin(source), end(source),
       back_inserter(coll));
  PRINT_ELEMENTS(coll);

  unique_copy(coll.cbegin(), coll.cend(),
              ostream_iterator<int>(cout, " "));
  cout << endl;

  unique_copy(coll.cbegin(), coll.cend(),
              ostream_iterator<int>(cout, " "),
              difference_one);
  cout << endl;
}
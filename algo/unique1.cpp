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
  int source[] { 1, 4, 4, 6, 1, 2, 2,
                 3, 1, 6, 6, 6, 5, 7 };
  list<int> coll;

  copy(begin(source), end(source),
       back_inserter(coll));
  PRINT_ELEMENTS(coll);

  auto pos { unique(coll) };

  copy(coll.begin(), pos,
       ostream_iterator<int>(cout, " "));
  cout << endl;

  copy(begin(source), end(source), coll.begin());
  PRINT_ELEMENTS(coll);

  coll.erase(unique(coll, greater<>()), coll.end());
  PRINT_ELEMENTS(coll);
}
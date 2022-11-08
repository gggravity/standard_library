//
// Created by martin on 11/8/22.
//

#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

int main ()
{
  list<int> coll;
  INSERT_ELEMENTS(coll, 1, 9);
  INSERT_ELEMENTS(coll, 1, 9);
  coll.sort();
  PRINT_ELEMENTS(coll);

  auto pos1 { lower_bound(coll, 5) };
  auto pos2 { upper_bound(coll, 5) };

  cout << "5 could get position "
       << distance(coll.cbegin(), pos1) + 1
       << " up to "
       << distance(coll.cbegin(), pos2) + 1
       << " without breaking the sorting" << endl;

  coll.insert(lower_bound(coll, 3), 3);
  coll.insert(upper_bound(coll, 7), 7);

  PRINT_ELEMENTS(coll);
}
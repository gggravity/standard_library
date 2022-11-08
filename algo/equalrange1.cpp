//
// Created by martin on 11/8/22.
//

#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
//#include "../algorithms.hpp"

#define RANGE(x) (x).begin(), (x).end()
#define CONST_RANGE(x) (x).cbegin(), (x).cend()

using namespace std;

int main ()
{
  list<int> coll;
  INSERT_ELEMENTS(coll, 1, 9);
  INSERT_ELEMENTS(coll, 1, 9);
  coll.sort();
  PRINT_ELEMENTS(coll);

  auto range { equal_range(CONST_RANGE(coll), 5) };

  cout << "5 could get position "
       << distance(coll.cbegin(), range.first) + 1
       << " up to "
       << distance(coll.cbegin(), range.second) + 1
       << " without breaking the sorting" << endl;

}
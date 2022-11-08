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

  INSERT_ELEMENTS(coll, 1, 7);
  INSERT_ELEMENTS(coll, 1, 8);
  PRINT_ELEMENTS(coll);

  auto pos { find(RANGE(coll), 7) };
  ++pos;

  inplace_merge(coll.begin(), pos, coll.end());
  PRINT_ELEMENTS(coll);
}
//
// Created by martin on 11/7/22.
//
#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

int main ()
{
  deque<int> coll;
  INSERT_ELEMENTS(coll,1,9);
  INSERT_ELEMENTS(coll,1,9);
  PRINT_ELEMENTS(coll);

  sort(coll);
  PRINT_ELEMENTS(coll);

  sort(coll, greater<>());
  PRINT_ELEMENTS(coll);
}

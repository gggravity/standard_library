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
  vector<int> coll;
  INSERT_ELEMENTS(coll, 1, 9);
  PRINT_ELEMENTS(coll);

  random_shuffle(coll.begin(), coll.end());
  PRINT_ELEMENTS(coll);

  sort(coll);
  PRINT_ELEMENTS(coll);


  shuffle(coll);
  PRINT_ELEMENTS(coll);
}

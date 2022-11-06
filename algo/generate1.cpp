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
  list<int> coll;

  generate_n(back_inserter(coll), 5, rand);
  PRINT_ELEMENTS(coll);

  generate(coll, rand);
  PRINT_ELEMENTS(coll);
}
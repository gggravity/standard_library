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
  vector<int> coll { 17, -3, 22, 13, 13, -9 };
  PRINT_ELEMENTS(coll);

  adjacent_difference(CONST_RANGE(coll), coll.begin());
  print_elements(coll, "relative ");

  partial_sum(CONST_RANGE(coll), coll.begin());
  print_elements(coll, "absolute ");
}

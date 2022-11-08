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
  vector<int> coll;
  INSERT_ELEMENTS(coll, 1, 9);
  PRINT_ELEMENTS(coll);

  cout << "sum: " << accumulate(CONST_RANGE(coll), 0) << endl;

  cout << "sum: " << accumulate(CONST_RANGE(coll), -100) << endl;

  cout << "product: " << accumulate(CONST_RANGE(coll), 1, multiplies { }) << endl;

  cout << "product: " << accumulate(CONST_RANGE(coll), 0, multiplies { }) << endl;
}

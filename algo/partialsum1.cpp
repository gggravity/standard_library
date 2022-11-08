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
//  coll = { 1, -1, 2, -2, 3, -3 };
  INSERT_ELEMENTS(coll, 1, 6);
  PRINT_ELEMENTS(coll);

  partial_sum(CONST_RANGE(coll),
              ostream_iterator<int>(cout, " "));
  cout << endl;

  partial_sum(CONST_RANGE(coll),
              ostream_iterator<int>(cout, " "),
              multiplies { });
  cout << endl;
}

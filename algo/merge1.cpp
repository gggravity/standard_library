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
  list<int> coll1;
  set<int> coll2;

  INSERT_ELEMENTS(coll1, 1, 6);
  INSERT_ELEMENTS(coll2, 3, 8);

  PRINT_ELEMENTS(coll1);
  PRINT_ELEMENTS(coll2);

  cout << "merged: ";
  merge(CONST_RANGE(coll1), CONST_RANGE(coll2),
        ostream_iterator<int>(cout, " "));
  cout << endl;
}
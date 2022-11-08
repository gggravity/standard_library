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
  vector<int> c1 { 1, 2, 2, 4, 6, 7, 7, 9 };
  deque<int> c2 { 2, 2, 2, 3, 6, 6, 8, 9 };

  cout << "c1:                         ";
  copy(CONST_RANGE(c1), ostream_iterator<int>(cout, " "));
  cout << endl;

  cout << "c1:                         ";
  copy(CONST_RANGE(c2), ostream_iterator<int>(cout, " "));
  cout << endl;

  cout << "merge():                    ";
  merge(CONST_RANGE(c1), CONST_RANGE(c2), ostream_iterator<int>(cout, " "));
  cout << endl;

  cout << "set_union():                ";
  set_union(CONST_RANGE(c1), CONST_RANGE(c2), ostream_iterator<int>(cout, " "));
  cout << endl;

  cout << "set_intersection():         ";
  set_intersection(CONST_RANGE(c1), CONST_RANGE(c2), ostream_iterator<int>(cout, " "));
  cout << endl;

  cout << "set_difference():           ";
  set_difference(CONST_RANGE(c1), CONST_RANGE(c2), ostream_iterator<int>(cout, " "));
  cout << endl;

  cout << "set_symmetric_difference(): ";
  set_symmetric_difference(CONST_RANGE(c1), CONST_RANGE(c2), ostream_iterator<int>(cout, " "));
  cout << endl;
}
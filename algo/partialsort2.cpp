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
  deque<int> coll1;
  vector<int> coll6(6);
  vector<int> coll30(30);

  INSERT_ELEMENTS(coll1, 3, 7);
  INSERT_ELEMENTS(coll1, 2, 6);
  INSERT_ELEMENTS(coll1, 1, 5);
  PRINT_ELEMENTS(coll1);

//  auto pos6 { partial_sort_copy(coll1.cbegin(), coll1.cend(),
//                                coll6.begin(), coll6.end()) };

  vector<int>::const_iterator pos6;
  pos6 = partial_sort_copy(coll1, coll6);

  copy(coll6.cbegin(), pos6, ostream_iterator<int>(cout, " "));
  cout << endl;

  vector<int>::const_iterator pos30;
  pos30 = partial_sort_copy(coll1, coll30, greater { });

  copy(coll30.cbegin(), pos30, ostream_iterator<int>(cout, " "));
  cout << endl;
}
//
// Created by martin on 11/5/22.
//

#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  ostream_iterator<int> int_writer(cout, "\n");

  *int_writer = 42;
  int_writer++;
  *int_writer = 77;
  int_writer++;
  *int_writer = -5;

  vector<int> coll { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout));
  cout << endl;

  copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " < "));
  cout << endl;
}

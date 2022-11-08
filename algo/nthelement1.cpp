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
  INSERT_ELEMENTS(coll, 3, 7);
  INSERT_ELEMENTS(coll, 2, 6);
  INSERT_ELEMENTS(coll, 1, 5);
  PRINT_ELEMENTS(coll);

//  nth_element(coll.begin(), coll.begin() + 3, coll.end());
  nth_element(coll, coll.begin() + 3);
  cout << "the four lowest elements are: ";
  copy(coll.cbegin(), coll.cbegin() + 4, ostream_iterator<int>(cout, " "));
  cout << endl;

  nth_element(coll, coll.end() - 4);
  cout << "the four highest elements are: ";
  copy(coll.cend() - 4, coll.cend(), ostream_iterator<int>(cout, " "));
  cout << endl;

  // another version
  nth_element(coll, coll.begin() + 3, greater { });
  cout << "the four highest elements are: ";
  copy(coll.cbegin(), coll.cbegin() + 4,
       ostream_iterator<int>(cout, " "));
  cout << endl;
}
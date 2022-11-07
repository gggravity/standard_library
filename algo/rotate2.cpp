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
//  vector<int> coll;
//  INSERT_ELEMENTS(coll, 1, 9);
//  print_elements(coll, "coll           ");
//
//  rotate(coll.begin(),
//         coll.begin() + 1,
//         coll.end());
//  print_elements(coll, "one left       ");
//
//  rotate(coll.begin(),
//         coll.end() - 2,
//         coll.end());
//  print_elements(coll , "two right      ");
//
//  rotate(coll.begin(),
//         find(coll, 4),
//         coll.end());
//  print_elements(coll , "four first     ");

  set<int> coll;
  INSERT_ELEMENTS(coll, 1, 9);

  copy(coll, ostream_iterator<int>(cout, " "));
  cout << endl;

  rotate_copy(coll, next(coll.cbegin()),
              ostream_iterator<int>(cout, " "));
  cout << endl;

  auto pos = coll.cend();
  advance(pos, -2);
  rotate_copy(coll, pos,
              ostream_iterator<int>(cout, " "));
  cout << endl;

  rotate_copy(coll, coll.find(4),
              ostream_iterator<int>(cout, " "));
  cout << endl;
}
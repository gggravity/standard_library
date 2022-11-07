//
// Created by martin on 11/7/22.
//
#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;
using namespace placeholders;

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

  vector<int> coll;
  INSERT_ELEMENTS(coll, 1, 9);
  print_elements(coll, "coll           ");

  rotate(coll, coll.begin() + 1);
  print_elements(coll, "one left       ");

  rotate(coll, coll.end() - 2);
  print_elements(coll, "two right      ");

  rotate(coll, find(coll, 4));
  print_elements(coll, "four first     ");
}
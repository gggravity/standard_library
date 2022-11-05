//
// Created by martin on 11/5/22.
//
//#include <bits/stdc++.h>
#include "assoiter.hpp"
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  unordered_set<int> collection;
  associative_insert_iterator<decltype(collection)> iter(collection);

  *iter = 1;
  iter++;
  *iter = 2;
  iter++;
  *iter = 3;

  associative_inserter(collection) = 44;
  associative_inserter(collection) = 55;

  PRINT_ELEMENTS(collection);

  vector<int> vals { 33, 67, -4, 13, 5, 2 };
  copy(vals.begin(), vals.end(),
       associative_insert_iterator(collection));

  PRINT_ELEMENTS(collection);
}
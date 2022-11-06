//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

void print_collection (const list<int> &list)
{
  PRINT_ELEMENTS(list);
}

bool less_for_collection (const list<int> &left, const list<int> &right)
{
  return lexicographical_compare(left, right);
}

int main ()
{
  list<int> c1, c2, c3, c4;

  INSERT_ELEMENTS(c1, 1, 5);
  c4 = c3 = c2 = c1;

  c1.push_back(7);
  c3.push_back(2);
  c3.push_back(0);
  c4.push_back(2);

  vector<list<int>> cc;
  cc.insert(cc.begin(), { c1, c2, c3, c4, c3, c1, c4, c2 });

  for_each(cc.cbegin(), cc.cend(), print_collection);
  cout << endl;

  sort(cc, less_for_collection);

  for_each(cc.cbegin(), cc.cend(), print_collection);
  cout << endl;
}
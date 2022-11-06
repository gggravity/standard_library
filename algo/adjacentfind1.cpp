//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"

using namespace std;

bool doubled (int left, int right)
{
  return left * 2 == right;
}

int main ()
{
  vector<int> coll;
  coll.push_back(1);
  coll.push_back(3);
  coll.push_back(2);
  coll.push_back(4);
  coll.push_back(5);
  coll.push_back(5);
  coll.push_back(0);

  PRINT_ELEMENTS(coll);

  auto pos { adjacent_find(coll.begin(), coll.end()) };

  if (pos != coll.end())
    {
      cout << "first two elements with equal value have position "
           << distance(coll.begin(), pos) + 1 << endl;
    }

  pos = adjacent_find(coll.begin(), coll.end(), doubled);

  if (pos != coll.end())
    {
      cout << "first two elements with second value twice the "
           << "first have position "
           << distance(coll.begin(), pos) + 1 << endl;
    }
}
//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

int main ()
{
  vector<int> coll1 { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  PRINT_ELEMENTS(coll1);

  if (is_sorted(coll1))
    {
      cout << "coll1 is sorted" << endl;
    }
  else
    {
      cout << "coll1 is not sorted" << endl;
    }

  map<int, string> coll2 { { 1, "Bill" },
                           { 2, "Jim" },
                           { 3, "Nico" },
                           { 4, "Liu" },
                           { 5, "Ai" } };

  PRINT_MAP(coll2);

  auto compare_name { [] (auto &left, auto &right)
                      {
                          return left.second < right.second;
                      } };

  if (is_sorted(coll2, compare_name))
    {
      cout << "names in coll2 are sorted" << endl;
    }
  else
    {
      cout << "names in coll2 are not sorted" << endl;
    }

  auto pos { is_sorted_until(coll2, compare_name) };

  if (pos != coll2.end())
    {
      cout << "first unsorted name: " << pos->second << endl;
    }
  else
    {
      cout << "container is sorted" << endl;
    }
}
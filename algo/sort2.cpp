//
// Created by martin on 11/7/22.
//
#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

bool less_length (const string &left, const string &right)
{
  return left.length() < right.length();
}

int main ()
{
  vector<string> coll1 { "1xxx", "2x", "3x", "4x", "5xx", "6xxxx",
                         "7xx", "8xxx", "9xx", "10xxx", "11", "12",
                         "13", "14xx", "15", "16", "17" };

  vector<string> coll2(coll1);

  PRINT_ELEMENTS(coll1);

  sort(coll1, less_length);
  stable_sort(coll2, less_length);

  PRINT_ELEMENTS(coll1);
  PRINT_ELEMENTS(coll2);
}
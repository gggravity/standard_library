//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

bool both_even_or_odd (int left, int right)
{
  return left % 2 == right % 2;
}

int main ()
{
  vector<int> coll1 { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  list<int> coll2 { 1, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
  deque<int> coll3 { 11, 12, 13, 19, 18, 17, 16, 15, 14, 11 };

  PRINT_ELEMENTS(coll1);
  PRINT_ELEMENTS(coll2);
  PRINT_ELEMENTS(coll3);

  if (is_permutation(coll1, coll2))
    {
      cout << "coll1 and coll2 have equal elements" << endl;
    }
  else
    {
      cout << "coll1 and coll2 don't have equal elements" << endl;
    }

  if (is_permutation(coll1, coll2, both_even_or_odd))
    {
      cout << "number of even and odd elements match" << endl;
    }
  else
    {
      cout << "number of even and odd elements don't match" << endl;
    }
}
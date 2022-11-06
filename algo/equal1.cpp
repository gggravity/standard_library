//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"

using namespace std;

bool both_even_or_odd (int left, int right)
{
  return left % 2 == right % 2;
}

int main ()
{
  vector<int> coll1;
  list<int> coll2;

  INSERT_ELEMENTS(coll1, 1, 7);
  INSERT_ELEMENTS(coll2, 3, 9);

  PRINT_ELEMENTS(coll1, "coll1:    ");
  PRINT_ELEMENTS(coll2, "coll2:    ");

  if (equal(coll1.begin(), coll1.end(), coll2.begin()))
    {
      cout << "coll1 == coll2" << endl;
    }
  else
    {
      cout << "coll1 != coll2" << endl;
    }

  if (equal(coll1.begin(), coll1.end(), coll2.begin(),
            both_even_or_odd))
    {
      cout << "even and odd elements correspond" << endl;
    }
  else
    {
      cout << "even and odd elements do not correspond" << endl;
    }
}
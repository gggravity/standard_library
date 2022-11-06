//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"

using namespace std;

bool check_even (int element, bool even)
{
  if (even)
    {
      return element % 2 == false;
    }
  else
    {
      return element % 2 == true;
    }
};

int main ()
{
  vector<int> coll;
  INSERT_ELEMENTS(coll, 1, 9);
  PRINT_ELEMENTS(coll, "coll:  ");

  bool check_even_args[] = { true, false, true };

  auto pos { search(
      coll.begin(), coll.end(),
      check_even_args, check_even_args + 3,
      check_even) };

  while (pos != coll.end())
    {
      cout << "sub-range found starting with element "
           << distance(coll.begin(), pos) + 1 << endl;

      pos = search(++pos, coll.end(),
                   check_even_args, check_even_args + 3,
                   check_even);
    }
}
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
  deque<int> coll;
  list<int> sub_coll;

  INSERT_ELEMENTS(coll, 1, 7);
  INSERT_ELEMENTS(coll, 1, 7);
  INSERT_ELEMENTS(sub_coll, 3, 6);

  PRINT_ELEMENTS(coll, "coll:         ");
  PRINT_ELEMENTS(sub_coll, "sub_coll:     ");

  auto pos {
      search(coll.begin(), coll.end(),
             sub_coll.begin(), sub_coll.end())
  };

  while (pos != coll.end())
    {
      cout << "sub_coll found starting with element "
           << distance(coll.begin(), pos) << endl;
      ++pos;
      pos = search(pos, coll.end(),
                   sub_coll.begin(), sub_coll.end());
    }
}
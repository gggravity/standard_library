//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"

using namespace std;

int main ()
{
  deque<int> coll;
  list<int> sub_coll;

  INSERT_ELEMENTS(coll, 1, 7);
  INSERT_ELEMENTS(coll, 1, 7);
  INSERT_ELEMENTS(sub_coll, 3, 6);

  PRINT_ELEMENTS(coll, "coll:     ");
  PRINT_ELEMENTS(sub_coll, "sub_coll: ");

  auto pos { find_end(coll.begin(), coll.end(),
                      sub_coll.begin(), sub_coll.end()) };

  deque<int>::iterator end { coll.end() };
  while (pos != end)
    {
      cout << "sub_coll found starting with element "
           << distance(coll.begin(), pos) + 1 << endl;

      end = pos;
      pos = find_end(coll.begin(), end,
                     sub_coll.begin(), sub_coll.end());
    }
}
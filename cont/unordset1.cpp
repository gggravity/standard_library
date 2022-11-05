//
// Created by martin on 11/4/22.
//
#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  unordered_set<int> coll { 1, 2, 3, 5, 7, 11, 13, 17, 19, 77 };
  PRINT_ELEMENTS(coll);

  coll.insert({ -7, 17, 33, -11, 17, 19, 1, 13 });
  PRINT_ELEMENTS(coll);

  coll.erase(33);
  PRINT_ELEMENTS(coll);

  coll.insert(accumulate(coll.begin(),coll.end(),0));
  print_elements(coll, "accumulate");

  if (coll.find(19) != coll.end())
    {
      cout << "19 is available" << endl;
    }

  for (auto pos { coll.begin() } ; pos != coll.end() ;)
    {
      if (*pos < 0)
        {
          pos = coll.erase(pos);
        }
      else
        {
          ++pos;
        }
    }
  PRINT_ELEMENTS(coll);
}
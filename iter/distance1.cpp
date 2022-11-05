//
// Created by martin on 11/5/22.
//

#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  list<int> coll;

  for (int i { 1 } ; i <= 9 ; ++i)
    {
      coll.push_back(i);
    }

  PRINT_ELEMENTS(coll);

  auto pos { find(coll.cbegin(), coll.cend(), 5) };

  if (pos != coll.cend())
    {
      cout << "difference between beginning and 5: "
           << distance(coll.cbegin(), pos) << endl;
    }
  else
    {
      cout << "5 not found" << endl;
    }
}

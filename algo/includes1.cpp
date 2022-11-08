//
// Created by martin on 11/8/22.
//

#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

int main ()
{
  list<int> coll;
  vector<int> search;
  INSERT_ELEMENTS(coll, 1, 9);
  PRINT_ELEMENTS(coll);

  search.push_back(3);
  search.push_back(4);
  search.push_back(7);
  PRINT_ELEMENTS(search);

  if (includes(coll, search))
    {
      cout << "all elements of search are also in coll" << endl;
    }
  else
    {
      cout << "not all elements of search are also in coll" << endl;
    }
}
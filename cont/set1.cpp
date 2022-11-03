//
// Created by martin on 11/3/22.
//

#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  set<int, greater<>> coll1;

  coll1.insert({ 4, 3, 5, 1, 6, 2 });
  coll1.insert(5);

  PRINT_ELEMENTS(coll1);

  auto status { coll1.insert(4) };
  if (status.second)
    {
      cout << "4 inserted as element " << distance(coll1.begin(), status.first) + 1 << endl;
    }
  else
    {
      cout << "4 already exists" << endl;
    }

  set<int> coll2(coll1.cbegin(), coll1.cend());

  PRINT_ELEMENTS(coll2);

  coll2.erase(coll2.begin(), coll2.find(3));

  PRINT_ELEMENTS(coll2);

  auto num { coll2.erase(5) };
  cout << num << " element(s) removed" << endl;

  PRINT_ELEMENTS(coll2);
}
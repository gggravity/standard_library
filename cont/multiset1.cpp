//
// Created by martin on 11/3/22.
//

#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  multiset<int, greater<>> coll1;

  coll1.insert({ 4, 3, 5, 1, 6, 2 });
  coll1.insert(5);

  PRINT_ELEMENTS(coll1);

  auto insert_position { coll1.insert(9) };

  cout << "9 inserted as element " << distance(coll1.begin(), insert_position) + 1 << endl; // zero based

  PRINT_ELEMENTS(coll1);

  multiset<int> coll2(coll1.cbegin(), coll1.cend());

  PRINT_ELEMENTS(coll2);

  coll2.erase(coll2.begin(), coll2.find(3));

  PRINT_ELEMENTS(coll2);

  auto num { coll2.erase(5) };
  cout << num << " element(s) removed" << endl;

  PRINT_ELEMENTS(coll2);
}
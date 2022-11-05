//
// Created by martin on 11/5/22.
//

#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  set<int> coll;
  insert_iterator<set<int>> iter(coll, coll.begin());

  *iter = 1;
  iter++;
  *iter = 2;
  iter++;
  *iter = 3;
  print_elements(coll, "set: ");

  inserter(coll, coll.end()) = 44;
  inserter(coll,coll.end()) = 55;
  print_elements(coll, "set: ");

  list<int> coll2;
  copy(coll.begin(), coll.end(), inserter(coll2,coll2.begin()));
  print_elements(coll2, "list: ");

  copy(coll.begin(),coll.end(), inserter(coll2,++coll2.begin()));
  print_elements(coll2, "list: ");
}

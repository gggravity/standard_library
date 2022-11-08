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
  vector<int> coll;

  INSERT_ELEMENTS(coll,3,7);
  INSERT_ELEMENTS(coll,5,9);
  INSERT_ELEMENTS(coll,1,4);
  print_elements(coll, "on entry              ");

  make_heap(coll);
  print_elements(coll, "after make_heap()     ");

  pop_heap(coll);
  coll.pop_back();
  print_elements(coll, "after pop_heap()      ");

  coll.push_back(17);
  push_heap(coll);
  print_elements(coll, "after push_heap()     ");

  sort_heap(coll);
  print_elements(coll, "after sort_heap()     ");
}
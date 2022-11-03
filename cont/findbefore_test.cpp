//
// Created by martin on 11/3/22.
//

#include <bits/stdc++.h>
#include "../stl/print.hpp"
#include "findbefore.hpp"

using namespace std;

int main ()
{
  forward_list<int> list { 1, 2, 3, 4, 5, 97, 98, 99 };

  auto pos_before { find_before_if(list.before_begin(), list.end(), [] (int i)
  { return i % 2 == 0; }) };

  DUMP(*pos_before);
  PRINT_ELEMENTS(list);
  list.insert_after(pos_before, 42);
  PRINT_ELEMENTS(list);

  auto pos_before_42 { find_before(list.before_begin(), list.end(), 42) };
  DUMP(*pos_before_42);
}
//
// Created by martin on 11/3/22.
//

#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  forward_list<int> list { 1, 2, 3, 4, 5, 97, 98, 99 };

  auto pos_before { list.before_begin() };

  for (auto pos { list.begin() } ; pos != list.end() ; ++pos, ++pos_before)
    {
      if (*pos % 2 == 0)
        {
          break;
        }
    }

  DUMP(*pos_before);
  PRINT_ELEMENTS(list);
  list.insert_after(pos_before, 42);
  PRINT_ELEMENTS(list);
}
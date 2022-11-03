//
// Created by martin on 11/3/22.
//

#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  forward_list<int> list1 { 1, 2, 3, 4, 5 };
  forward_list<int> list2 { 97, 98, 99 };

  auto pos1 { list1.before_begin() };

  for (auto pb1 { list1.begin() } ; pb1 != list1.end() ; ++pb1, ++pos1)
    {
      if (*pb1 == 3)
        {
          break;
        }
    }

  auto pos2 { list2.before_begin() };

  for (auto pb2 { list2.begin() } ; pb2 != list2.end() ; ++pb2, ++pos2)
    {
      if (*pb2 == 99)
        {
          break;
        }
    }

  DUMP(*pos1);
  DUMP(*pos2);

  list1.splice_after(pos2, list2, pos1);

  PRINT_ELEMENTS(list1);
  PRINT_ELEMENTS(list2);
}
//
// Created by martin on 11/5/22.
//

#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  vector<int> coll { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  auto pos { find(coll.cbegin(), coll.cend(), 5) };

  DUMP(*pos);

  vector<int>::const_reverse_iterator r_pos(pos);

  DUMP(*r_pos);
}

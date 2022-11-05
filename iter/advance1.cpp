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

  auto pos { coll.begin() };

  cout << *pos << endl;

  advance(pos, 3);

  cout << *pos << endl;

  advance(pos, -1);

  cout << *pos << endl;
}

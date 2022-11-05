//
// Created by martin on 11/5/22.
//

#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

void print (int element)
{
  cout << element << ' ';
}

int main ()
{
  deque<int> coll { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  auto pos1 { find(coll.begin(), coll.end(), 2) };

  auto pos2 { find(coll.begin(), coll.end(), 7) };

  for_each(pos1, pos2, print);
  cout << endl;

  deque<int>::const_reverse_iterator r_pos1(pos1);
  deque<int>::const_reverse_iterator r_pos2(pos2);

  for_each(r_pos2, r_pos1, print);
  cout << endl;
}

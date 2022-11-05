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
  list<int> coll { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  for_each(coll.begin(), coll.end(), print);
  cout << endl;

  for_each(coll.rbegin(), coll.rend(), print);
  cout << endl;
}

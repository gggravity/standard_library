//
// Created by martin on 11/1/22.
//

#include <bits/stdc++.h>
#include "print.hpp"

using namespace std;

int main ()
{
  deque<int> collection { 1, 3, 19, 5, 13, 7, 11, 2, 17 };

  print_elements(collection, "original:  ");

  int x = 5;
  int y = 12;

  auto pos { find_if(collection.cbegin(), collection.cend(), [=] (int i)
  { return i > x && i < y; }) };

  cout << "first element >5 and <12: " << *pos << endl;
}
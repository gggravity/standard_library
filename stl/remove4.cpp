//
// Created by martin on 11/1/22.
//
#include <bits/stdc++.h>
#include "print.hpp"

using namespace std;

int main ()
{
  list<int> collection;
  for (int i { 1 } ; i <= 6 ; ++i)
    {
      collection.push_back(i);
      collection.push_front(i);
    }

  PRINT_ELEMENTS(collection);

  collection.erase(remove(collection.begin(), collection.end(), 3), collection.end()); // bad

  PRINT_ELEMENTS(collection);

  collection.remove(4); // good

  PRINT_ELEMENTS(collection);
}

//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"

using namespace std;

int main ()
{
  vector<int> collection;

  INSERT_ELEMENTS(collection, 1, 9);

  for_each(collection.begin(), collection.end(),
           [] (int &element)
           {
               element += 10;
           });

  PRINT_ELEMENTS(collection);

  for_each(collection.begin(), collection.end(),
           [=] (int &element)
           {
               element += *collection.begin();
           });

  PRINT_ELEMENTS(collection);
}
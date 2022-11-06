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

  for_each(collection.cbegin(), collection.cend(),
           [] (int element)
           {
               cout << element << ' ';
           });
  cout << endl;
}
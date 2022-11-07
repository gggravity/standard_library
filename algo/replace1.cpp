//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

int main ()
{
  list<int> collection;
  INSERT_ELEMENTS(collection, 2, 7);
  INSERT_ELEMENTS(collection, 4, 9);
  PRINT_ELEMENTS(collection);

  replace(collection, 6, 42);
  PRINT_ELEMENTS(collection);

  replace_if(collection,
             [] (int element)
             {
                 return element < 5;
             }, 0);
  PRINT_ELEMENTS(collection);
}
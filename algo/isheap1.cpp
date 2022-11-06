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
  vector<int> collection_1 { 9, 8, 7, 7, 5, 4, 2, 1 };
  vector<int> collection_2 { 5, 3, 2, 1, 4, 7, 9, 8, 6 };

  PRINT_ELEMENTS(collection_1);
  PRINT_ELEMENTS(collection_2);

  cout << boolalpha << "collection 1 is heap: "
       << is_heap(collection_1) << endl;

  cout << boolalpha << "collection 2 is heap: "
       << is_heap(collection_2) << endl;

  auto pos { is_heap_until(collection_2) };

  if (pos != collection_2.end())
    {
      cout << "first non-heap element: " << *pos << endl;
    }

}
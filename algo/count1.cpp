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
  PRINT_ELEMENTS(collection, "collection: ");

  auto number { count(collection.cbegin(), collection.cend(), 4) };
  cout << "number of elements equal to 4:        " << number << endl;

  number = count_if(collection.cbegin(), collection.cend(),
                    [] (int element)
                    {
                        return element % 2 == 0;
                    });
  cout << "number of elements with even value:   " << number << endl;

  number = count_if(collection.cbegin(), collection.cend(),
                    [] (int element)
                    {
                        return element >4;
                    });
  cout << "number of elements greater than 4:    " << number << endl;
}
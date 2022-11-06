//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"

using namespace std;
using namespace placeholders;

int main ()
{
  vector<int> collection;
  vector<int>::iterator pos;

  INSERT_ELEMENTS(collection, 1, 9);
  PRINT_ELEMENTS(collection, "collection: ");

  pos = find_if(collection.begin(), collection.end(),
                bind(greater<>(), _1, 3));

  cout << "the "
       << distance(collection.begin(), pos) + 1
       << ". element is the first greater than 3" << endl;

  pos = find_if(collection.begin(), collection.end(),
                [] (int element)
                {
                    return element % 3 == 0;
                });

  cout << "the "
       << distance(collection.begin(), pos) + 1
       << ". element is the first divisible by 3" << endl;

  pos = find_if_not(collection.begin(), collection.end(),
                bind(less<>(), _1, 5));
  cout << "first value >= 5 -> " << *pos << endl;
}
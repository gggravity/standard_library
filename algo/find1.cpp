//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"

using namespace std;

int main ()
{
  list<int> collection;

  INSERT_ELEMENTS(collection, 1, 9);
  INSERT_ELEMENTS(collection, 1, 9);

  PRINT_ELEMENTS(collection, "collection: ");

  auto pos1 { find(
      collection.cbegin(),
      collection.cend(), 4) };

  list<int>::const_iterator pos2;
  if (pos1 != collection.cend())
    {
      pos2 = find(++pos1, collection.cend(), 4);
    }

  if (pos1 != collection.cend() && pos2 != collection.end())
    {
      copy(--pos1, ++pos2, ostream_iterator<int>(cout, " "));
      cout << endl;
    }
}
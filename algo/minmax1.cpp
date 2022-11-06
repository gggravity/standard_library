//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"

using namespace std;

bool abs_less (int left, int right)
{
  return abs(left) < abs(right);
}

int main ()
{
  deque<int> collection;

  INSERT_ELEMENTS(collection, 2, 6);
  INSERT_ELEMENTS(collection, -3, 6);

  PRINT_ELEMENTS(collection);

  cout << "minimum: "
       << *min_element(collection.cbegin(), collection.cend())
       << endl;

  cout << "maximum: "
       << *max_element(collection.cbegin(), collection.cend())
       << endl;

  auto min_max { minmax_element(
      collection.cbegin(),
      collection.cend()
  ) };
  cout << "min: " << *(min_max.first) << endl;
  cout << "max: " << *(min_max.second) << endl;
  cout << "distance: " << distance(min_max.first, min_max.second) << endl;

  cout << "minimum of absolute values: "
       << *min_element(collection.cbegin(),
                       collection.cend(),
                       abs_less) << endl;

  cout << "maximum of absolute values: "
       << *max_element(collection.cbegin(),
                       collection.cend(),
                       abs_less) << endl;

}
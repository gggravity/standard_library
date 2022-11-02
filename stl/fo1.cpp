#include <bits/stdc++.h>
#include "print.hpp"

using namespace std;

int main ()
{
  deque<int> collection { 1, 2, 3, 5, 7, 11, 13, 17, 19 };

  transform(collection.cbegin(), collection.cend(),
            collection.begin(), negate<>());

  print_elements(collection, "negated ");

  transform(collection.cbegin(), collection.cend(),
            collection.begin(), collection.begin(),
            multiplies<>());

  print_elements(collection, "multiplied ");

}
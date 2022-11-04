//
// Created by martin on 11/4/22.
//

#include <bits/stdc++.h>
#include "../stl/print.hpp"
#include "replace_key.hpp"

using namespace std;

int main ()
{
  map<string, float> collection;

  collection.emplace("AAA", 111);
  collection.emplace("BBB", 222);
  collection.emplace("CCC", 333);

  PRINT_MAP(collection);

  replace_key(collection, "AAA", "XXX");

  PRINT_MAP(collection);
}
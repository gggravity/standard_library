//
// Created by martin on 11/4/22.
//
#include <bits/stdc++.h>

#include "buckets.hpp"
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  unordered_set<int> int_set { 1, 2, 3, 5, 7, 11, 13, 17, 19 };
  print_hash_table_state(int_set);

  int_set.insert({ -7, 17, 33, 4 });
  print_hash_table_state(int_set);
}
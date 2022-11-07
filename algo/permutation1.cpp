//
// Created by martin on 11/7/22.
//
#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

int main ()
{
  vector<int> coll;
  INSERT_ELEMENTS(coll, 1, 3);
  print_elements(coll, "on entry  ");

  while (next_permutation(coll))
    {
      print_elements(coll, "coll      ");
    }

  print_elements(coll, "afterward ");

  // loop ends immediately
  while (prev_permutation(coll))
    {
      print_elements(coll, "coll     ");
    }
  print_elements(coll, "now       ");

  while (prev_permutation(coll))
    {
      print_elements(coll, "coll      ");
    }
  print_elements(coll, "afterward ");
}
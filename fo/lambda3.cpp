//
// Created by martin on 11/5/22.
//
#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  vector<int> coll { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  print_elements(coll, "coll           ");

  int counter { 0 };

//  auto pos { remove_if(coll.begin(), coll.end(),
//                       [counter] (int) mutable
//                       {
//                           return ++counter == 3;
//                       }) };

  auto pos { remove_if(coll.begin(), coll.end(),
                       [&counter] (int)
                       {
                           return ++counter == 3;
                       }) };


  coll.erase(pos, coll.end());

  print_elements(coll, "3rd removed    ");
}
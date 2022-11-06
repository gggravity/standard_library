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
  array<int, 10> collection { };
  iota(collection, 42);
  PRINT_ELEMENTS(collection);
}
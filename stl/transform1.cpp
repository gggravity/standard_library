//
// Created by martin on 11/1/22.
//
#include <bits/stdc++.h>
#include "print.hpp"

using namespace std;

auto square (int value)
{
  return value * value;
}

int main ()
{
  set<int> collection1;
  vector<int> collection2;

  for (int i { 1 } ; i <= 9 ; ++i)
    {
      collection1.insert(i);
    }

  print_elements(collection1, "initialized: ");

  transform(collection1.cbegin(), collection1.cend(), back_inserter(collection2), square);

  print_elements(collection2, "squared:     ");

  cout << endl;
}
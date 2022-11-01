//
// Created by martin on 11/1/22.
//
#include <bits/stdc++.h>
#include "print.hpp"

using namespace std;

void print (int elem)
{
  cout << elem << ' ';
}

int main ()
{
  vector<int> collection;

  for (int i { 1 } ; i <= 9 ; ++i)
    {
      collection.push_back(i);
    }

  for_each(collection.cbegin(), collection.cend(), print);
  cout << endl;
}
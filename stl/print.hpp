//
// Created by martin on 11/1/22.
//

#include <bits/stdc++.h>

#define PRINT_ELEMENTS(varname) print_elements(varname, #varname)

using namespace std;

template < typename Collection >
void print_elements (Collection collection, const string &prefix)
{
  cout << prefix << ": ";
  for (auto elem : collection)
    {
      cout << elem << ' ';
    }
  cout << endl;
}
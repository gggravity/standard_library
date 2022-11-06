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
  vector<char> source(10, '.');
  PRINT_ELEMENTS(source);

  for (auto c { 'a' } ; c <= 'f' ; ++c)
    {
      source.push_back(c);
    }
  PRINT_ELEMENTS(source);

  source.insert(source.end(), 10, '.');
  PRINT_ELEMENTS(source);

  vector<char> c1(source);
  copy(c1.cbegin() + 10,
       c1.cbegin() + 16,
       c1.begin() + 7);
  print_elements(c1, "c1    ");

  vector<char> c2(source);
  copy_backward(c2.cbegin() + 10,
                c2.cbegin() + 16,
                c2.begin() + 19);
  print_elements(c2, "c2    ");
}
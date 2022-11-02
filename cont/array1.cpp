//
// Created by martin on 11/2/22.
//

#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  array<int, 10> a { 11, 22, 33, 44 };

  PRINT_ELEMENTS(a);

  a.back() = 9999999;
  a[a.size() - 2] = 42;

  PRINT_ELEMENTS(a);

  cout << "sum:" << accumulate(a.begin(), a.end(), 0) << endl;

  transform(a.begin(), a.end(), a.begin(), negate<>());

  PRINT_ELEMENTS(a);
}
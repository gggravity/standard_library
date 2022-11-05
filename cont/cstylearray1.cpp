//
// Created by martin on 11/5/22.
//

#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  int vals[] { 33, 67, -4, 13, 5, 2 };

  vector<int> v(begin(vals), end(vals));

  copy(begin(v), end(v), ostream_iterator<int>(cout, " "));
  cout << endl;
}

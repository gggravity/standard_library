//
// Created by martin on 11/5/22.
//

#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  int coll[] { 5, 6, 2, 4, 1, 3 };

  copy(coll, coll + 6, ostream_iterator<int>(cout, " "));
  cout << endl;

  transform(coll, coll + 6, coll, coll, multiplies<>());

  copy(coll, coll + 6, ostream_iterator<int>(cout, " "));
  cout << endl;

  sort(coll, coll + 6);

  copy(coll, coll + 6, ostream_iterator<int>(cout, " "));
  cout << endl;

  copy(coll, coll + 6, ostream_iterator<int>(cout, " "));
  cout << endl;
}

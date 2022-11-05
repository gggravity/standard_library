//
// Created by martin on 11/5/22.
//

#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  vector<string> coll((istream_iterator<string>(cin)),
                      istream_iterator<string>());

  sort(coll.begin(), coll.end());

  copy(coll.cbegin(), coll.cend(),
       ostream_iterator<string>(cout, "\n"));
}

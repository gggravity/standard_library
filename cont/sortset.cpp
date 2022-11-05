//
// Created by martin on 11/5/22.
//

#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  set<string> coll((istream_iterator<string>(cin)),
                   istream_iterator<string>());

  copy(coll.cbegin(), coll.cend(),
       ostream_iterator<string>(cout, "\n"));
}

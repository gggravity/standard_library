//
// Created by martin on 11/2/22.
//

#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  deque<string> coll;

  coll.assign(3, "string");
  coll.emplace_back("last string");
  coll.emplace_front("first string");

  copy(coll.cbegin(), coll.cend(),
       ostream_iterator<string>(cout, "\n"));

  coll.pop_front();
  coll.pop_back();

  for (unsigned i = 1 ; i < coll.size() ; ++i)
    {
      coll[i] = "another " + coll[i];
    }

  coll.resize(4, "resized string");

  copy(coll.cbegin(), coll.cend(),
       ostream_iterator<string>(cout, "\n"));
}
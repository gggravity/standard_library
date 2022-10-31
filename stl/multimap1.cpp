//
// Created by martin on 10/31/22.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  multimap<int, string> coll;

  coll = {
      { 5, "tagged" },
      { 2, "a" },
      { 1, "this" },
      { 4, "of" },
      { 6, "strings" },
      { 1, "is" },
      { 3, "multimap" }
  };

  for (const auto &elem : coll)
    {
      cout << elem.second << ' ';
    }
  cout << endl;
}
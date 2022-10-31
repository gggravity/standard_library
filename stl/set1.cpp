//
// Created by martin on 10/31/22.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  using Int_set = set<int>;

  Int_set coll;

  coll.insert(3);
  coll.insert(1);
  coll.insert(5);
  coll.insert(4);
  coll.insert(1);
  coll.insert(6);
  coll.insert(2);

  Int_set::const_iterator pos;

  for (pos = coll.begin() ; pos != coll.end() ; ++pos)
    {
      cout << *pos << ' ';
    }

  cout << endl;
}
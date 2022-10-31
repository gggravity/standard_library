//
// Created by martin on 10/31/22.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  unordered_multiset<int> coll;

  coll.insert({ 1, 3, 5, 7, 11, 13, 17, 19, 23, 27, 1 });

  for (auto elem : coll)
    {
      cout << elem << ' ';
    }
  cout << endl;

  coll.insert(25);

  for (auto elem : coll)
    {
      cout << elem << ' ';
    }
  cout << endl;
}
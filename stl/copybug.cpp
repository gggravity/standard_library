//
// Created by martin on 10/31/22.
//

#include <bits/stdc++.h>

using namespace std;

template < typename Collection >
void print (Collection collection, const string &prefix)
{
  cout << prefix << ": ";
  for (auto elem : collection)
    {
      cout << elem << ' ';
    }
  cout << endl;
}

int main ()
{
  list<int> coll1 { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  vector<int> coll2;

  copy(coll1.cbegin(), coll1.cbegin(), coll2.begin());

  print(coll1, "coll1");
  print(coll2, "coll2");
}
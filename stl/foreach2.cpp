//
// Created by martin on 11/1/22.
//

#include <bits/stdc++.h>

using namespace std;

struct Print_int
{
    void operator() (int elem) const
    {
      cout << elem << ' ';
    }
};

int main ()
{
  vector<int> collection;

  for (int i { 1 } ; i <= 9 ; ++i)
    {
      collection.push_back(i);
    }

  for_each(collection.cbegin(), collection.cend(), Print_int());
  cout << endl;
}
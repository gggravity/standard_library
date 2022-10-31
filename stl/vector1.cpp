//
// Created by martin on 10/31/22.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  vector<int> coll;

  for (int i { 1 } ; i <= 6 ; ++i)
    {
      coll.push_back(i);
    }

  for (int i { } ; i < coll.size() ; ++i)
    {
      cout << coll[i] << " ";
    }
  cout << endl;
}
//
// Created by martin on 10/31/22.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  list<char> coll;

  for (auto c { 'a' } ; c <= 'z' ; ++c)
    {
      coll.push_back(c);
    }

  for (auto elem : coll)
    {
      cout << elem << " ";
    }

  cout << endl;
}
//
// Created by martin on 10/31/22.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  array<string,5> coll { "hello", "world"};


  for (int i { } ; i < coll.size() ; ++i)
    {
      cout << i << ": " << coll[i] << endl;
    }
}
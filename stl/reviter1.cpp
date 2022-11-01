//
// Created by martin on 11/1/22.
//
#include <bits/stdc++.h>

using namespace std;

int main ()
{
  vector<int> collection;

  for (int i { } ; i <= 9 ; ++i)
    {
      collection.push_back(i);
    }

  copy(collection.crbegin(),
       collection.crend(),
       ostream_iterator<int>(std::cout, " "));
}
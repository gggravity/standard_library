//
// Created by martin on 11/2/22.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  vector<int> coll1;
  vector<int> coll2;

  auto pos { coll1.begin() };
  reverse(++pos, coll1.end());

  for (int i { 1 } ; i <= 9 ; ++i)
    {
      coll1.push_back(i);
    }

  copy(coll1.cbegin(), coll1.cend(), coll2.begin());

  copy(coll1.cbegin(), coll2.cend(), coll1.end());
}
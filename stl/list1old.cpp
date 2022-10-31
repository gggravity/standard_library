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

  list<char>::const_iterator pos;
  for (pos = coll.cbegin() ; pos != coll.cend() ; ++pos)
    {
      cout << *pos << ' ';
    }
  cout << endl;
}
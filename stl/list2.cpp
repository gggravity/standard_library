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

  cout << "size: " << coll.size() << endl;

  while (!coll.empty())
    {
      cout << coll.front() << " ";
      coll.pop_front();
    }
  cout << endl;

  cout << "size: " << coll.size() << endl;
}
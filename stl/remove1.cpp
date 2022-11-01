//
// Created by martin on 11/1/22.
//
#include <bits/stdc++.h>

using namespace std;

int main ()
{
  list<int> collection;

  for (int i { 1 } ; i <= 6 ; ++i)
    {
      collection.push_front(i);
      collection.push_back(i);
    }

  cout << "pre:   ";
  copy(collection.cbegin(), collection.cend(),
       ostream_iterator<int>(cout, " "));
  cout << endl;

  remove(collection.begin(), collection.end(), 3);

  cout << "post:  ";
  copy(collection.cbegin(), collection.cend(),
       ostream_iterator<int>(cout, " "));
  cout << endl;
}
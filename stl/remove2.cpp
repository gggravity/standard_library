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

  copy(collection.cbegin(), collection.cend(), ostream_iterator<int>(cout, " "));
  cout << endl;

  auto end { remove(collection.begin(), collection.end(), 3) };

  copy(collection.begin(), end, ostream_iterator<int>(cout, " "));
  cout << endl;

  cout << "number of removed elements: " << distance(end, collection.end()) << endl;

  collection.erase(end, collection.end());

  copy(collection.cbegin(), collection.cend(), ostream_iterator<int>(cout, " "));
  cout << endl;
}
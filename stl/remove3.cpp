//
// Created by martin on 11/1/22.
//
#include <bits/stdc++.h>

using namespace std;

int main ()
{
  set<int> collection { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  copy(collection.cbegin(), collection.cend(), ostream_iterator<int>(cout, " "));
  cout << endl;

  auto num = collection.erase(3);

  cout << "number of removed elements: " << num << endl;

  copy(collection.cbegin(), collection.cend(), ostream_iterator<int>(cout, " "));
  cout << endl;
}
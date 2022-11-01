//
// Created by martin on 10/31/22.
//

#include <bits/stdc++.h>

using namespace std;

template < typename Collection >
void print (Collection collection, const string &prefix)
{
  cout << prefix << ": ";
  for (auto elem : collection)
    {
      cout << elem << ' ';
    }
  cout << endl;
}

int main ()
{
  vector<int> collection { 2, 5, 4, 1, 6, 3 };
  print(collection, "original");

  auto min_pos { min_element(collection.begin(), collection.end()) };
  auto max_pos { max_element(collection.begin(), collection.end()) };
  cout << "min_pos: " << *min_pos << endl;
  cout << "max_pos: " << *max_pos << endl;

  sort(collection.begin(), collection.end());
  print(collection, "sorted");

  auto pos3 { find(collection.begin(), collection.end(), 3) };
  cout << "pos3: " << *pos3 << endl;

  reverse(pos3, collection.end());
  print(collection, "reversed from pos3");
}
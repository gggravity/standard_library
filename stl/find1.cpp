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
  list<int> collection;

  for (int i { 20 } ; i <= 40 ; ++i)
    {
      collection.push_back(i);
    }

  print(collection, "original");

  auto pos3 { find(collection.begin(), collection.end(), 3) };
  cout << "pos3: " << *pos3 << endl;
  cout << "pos3 == end(): " << boolalpha << (pos3 == collection.end()) << endl;

  reverse(pos3, collection.end());
  print(collection, "reversed from pos3");

  auto pos25 { find(collection.begin(), collection.end(), 25) };
  cout << "pos25: " << *pos25 << endl;

  auto pos35 { find(collection.begin(), collection.end(), 35) };
  cout << "pos35: " << *pos35 << endl;

  auto min_pos { min_element(pos25, pos35) };
  auto max_pos { max_element(pos25, pos35) };
  cout << "min_pos: " << *min_pos << endl;
  cout << "max_pos: " << *max_pos << endl;

  print(collection, "sorted");

  vector<int> v(pos25, pos35);
  print(v, "v");

}
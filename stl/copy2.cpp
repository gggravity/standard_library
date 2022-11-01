#include <bits/stdc++.h>

using namespace std;

#define print(varname) Print(varname, #varname)

template < typename Collection >
void Print (Collection collection, const string &prefix)
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
  list<int> coll1 { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  print(coll1);

  vector<int> coll2;
  copy(coll1.cbegin(), coll1.cend(), back_inserter(coll2));
  print(coll2);

  deque<int> coll3;
  copy(coll1.cbegin(), coll1.cend(), front_inserter(coll3));
  print(coll3);

  set<int> coll4;
  copy(coll1.cbegin(), coll1.cend(), inserter(coll4, coll4.begin()));
  print(coll4);
}
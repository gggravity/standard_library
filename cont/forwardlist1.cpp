//
// Created by martin on 11/3/22.
//

#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

template < typename T >
void print_lists (const string &s,
                  const forward_list<T> &list1,
                  const forward_list<T> &list2)
{
  cout << s << endl;
  cout << " list1: ";
  copy(list1.cbegin(), list1.cend(), ostream_iterator<T>(cout, " "));
  cout << endl << " list2: ";
  copy(list2.cbegin(), list2.cend(), ostream_iterator<T>(cout, " "));
  cout << endl;
}

int main ()
{

  forward_list<int> list1 { 1, 2, 3, 4 };
  forward_list<int> list2 { 77, 88, 99 };

  print_lists("initial:", list1, list2);

  list2.insert_after(list2.before_begin(), 99);
  list2.pop_front();
  list2.insert_after(list2.before_begin(), { 10, 11, 12, 13 });

  print_lists("list2 into list1", list1, list2);

  list2.erase_after(list2.begin());
  list2.erase_after(find(list2.begin(), list2.end(), 99), list2.end());

  print_lists("delete 2nd and after 99:", list1, list2);

  list1.sort();
  list2 = list1;
  list2.unique();

  print_lists("sorted and unique:", list1, list2);

  list1.merge(list2);

  print_lists("merged:", list1, list2);
}
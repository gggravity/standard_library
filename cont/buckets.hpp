//
// Created by martin on 11/4/22.
//

#pragma once

#include <bits/stdc++.h>

using namespace std;

template < typename T1, typename T2 >
ostream &operator<< (ostream &os, const pair<T1, T2> &p)
{
  return os << "[" << p.first << "," << p.second << "]";
}

template < typename Container >
void print_hash_table_state (const Container &container)
{
  cout << "size:            " << container.size() << endl;
  cout << "buckets:         " << container.bucket_count() << endl;
  cout << "load factor:     " << container.load_factor() << endl;
  cout << "max load facter: " << container.max_load_factor() << endl;

  if (typeid(typename iterator_traits<typename Container::iterator>::iterator_category)
      == typeid(bidirectional_iterator_tag))
    {
      cout << "chaining style:  doubly-linked" << endl;
    }
  else
    {
      cout << "chaining style:  singly-linked" << endl;
    }

  cout << "data: " << endl;
  for (auto index { 0 } ; index != container.bucket_count() ; ++index)
    {
      cout << " b[" << setw(2) << index << "]: ";
      for (auto pos { container.begin(index) } ; pos != container.end(index) ; ++pos)
        {
          cout << *pos << " ";
        }
      cout << endl;
    }
  cout << endl;
}
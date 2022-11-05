//
// Created by martin on 11/5/22.
//
#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

struct Nth
{
  explicit Nth (int nth) :
      m_nth { nth },
      m_count { 0 }
  { }

  bool operator() (int count)
  {
    return ++m_count == m_nth;
  }

 private:
  int m_nth;

  int m_count;
};

int main ()
{
  list<int> coll { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  print_elements(coll,"coll         ");

  auto pos { remove_if(coll.begin(), coll.end(), Nth(3)) };

  coll.erase(pos, coll.end());

  print_elements(coll, "3rd removed  ");
}
//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"

using namespace std;

int main ()
{
  deque<int> coll { 1, 2, 7, 7, 6, 3, 9, 5, 7, 7, 7, 3, 6 };

  auto pos { search_n(coll.begin(), coll.end(), 3, 7) };

  if (pos != coll.end())
    {
      cout << "three consecutive elements with value 7 "
           << "starts with " << distance(coll.begin(), pos)
           << ". element" << endl;
    }
  else
    {
      cout << "no four consecutive elements with value 7 found" << endl;
    }

  pos = search_n(coll.begin(), coll.end(), 4, 0,
                 [] (int element, int value)
                 {
                     return element % 2 == true;
                 });

  if (pos != coll.end())
    {
      cout << "first four consecutive odd elements are: ";
      for (auto i { 0 } ; i < 4 ; ++i, ++pos)
        {
          cout << *pos << ' ';
        }
    }
  else
    {
      cout << "no four consecutive elements with value > 3 found" << endl;
    }
  cout << endl;
}
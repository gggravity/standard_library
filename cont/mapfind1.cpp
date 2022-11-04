//
// Created by martin on 11/4/22.
//

#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  map<float, float> coll { { 1, 7 },
                           { 2, 4 },
                           { 3, 2 },
                           { 4, 3 },
                           { 5, 6 },
                           { 6, 1 },
                           { 7, 3 } };

  auto pos_key { coll.find(3.0) };
  if (pos_key != coll.end())
    {
      cout << "key 3.0 found (" << pos_key->first
           << ":" << pos_key->second << ")" << endl;
    }

  auto pos_val { find_if(coll.begin(), coll.end(),
                         [] (auto &elem)
                         {
                             return elem.second == 3.0;
                         }) };
  if (pos_val != coll.end())
    {
      cout << "value 3.0 found (" << pos_val->first
           << ":" << pos_key->second << ")" << endl;
    }
}
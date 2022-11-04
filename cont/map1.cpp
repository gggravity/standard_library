//
// Created by martin on 11/4/22.
//


#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  map<string, double> collection { { "tim",     9.9 },
                                   { "struppi", 11.77 } };

  for_each(collection.begin(), collection.end(),
           [] (auto &elem)
           {
               elem.second *= elem.second;
           });

  for_each(collection.begin(), collection.end(),
           [] (auto &elem)
           {
               cout << elem.first << ": " << elem.second << endl;
           });
}
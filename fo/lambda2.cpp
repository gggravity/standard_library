//
// Created by martin on 11/5/22.
//
#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  vector<int> coll { 1, 2, 3, 4, 5, 6, 7, 8 };

  long sum { 0 };

  for_each(coll.begin(), coll.end(),
           [&sum] (int element)
           {
               sum += element;
           });

  double mean_value { static_cast<double>(sum) / static_cast<double>(coll.size()) };
  cout << "mean value: " << mean_value << endl;
}
//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"

using namespace std;

class Mean_value
{
 public:
  Mean_value () :
      num { 0 },
      sum { 0 }
  {

  }

  void operator() (int element)
  {
    num++;
    sum += element;
  }

  explicit operator double () const
  {
    return static_cast<double>(sum) / static_cast<double>(num);
  }

 private:
  long num;

  long sum;
};

int main ()
{
  vector<int> collection;

  INSERT_ELEMENTS(collection, 1, 8);

  double mean_value { for_each(collection.begin(), collection.end(), Mean_value()) };

  cout << "mean value: " << mean_value << endl;
}
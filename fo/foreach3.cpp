//
// Created by martin on 11/5/22.
//
#include <bits/stdc++.h>

#include "../stl/print.hpp"

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
    ++num;
    sum += element;
  }

  [[nodiscard]] double value () const
  {
    return static_cast<double>(sum) / static_cast<double>(num);
  }

 private:
  long num;

  long sum;
};

int main ()
{
  vector<int> coll { 1, 2, 3, 4, 5, 6, 7, 8 };

  Mean_value mean_value { for_each(coll.begin(), coll.end(), Mean_value()) };

  cout << "mean value: " << mean_value.value() << endl;
}
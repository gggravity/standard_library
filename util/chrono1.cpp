//
// Created by martin on 10/30/22.
//

#include <bits/stdc++.h>

using namespace std;

auto as_string (const chrono::system_clock::time_point &time_point)
{
  auto t { chrono::system_clock::to_time_t(time_point) };
  string time_string { ctime(&t) };
  time_string.resize(time_string.size() - 1);
  return time_string;
}

int main ()
{
  chrono::system_clock::time_point time_point;
  cout << "epoch: " << as_string(time_point) << endl;

  time_point = chrono::system_clock::now();
  cout << "now:   " << as_string(time_point) << endl;

  time_point = chrono::system_clock::time_point::min();
  cout << "min:   " << as_string(time_point) << endl;

  time_point = chrono::system_clock::time_point::max();
  cout << "max:   " << as_string(time_point) << endl;
}
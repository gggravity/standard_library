//
// Created by martin on 10/30/22.
//

#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

auto as_string (const system_clock::time_point &time_point)
{
  auto t { system_clock::to_time_t(time_point) };
  string time_string { ctime(&t) };
  time_string.resize(time_string.size() - 1);
  return time_string;
}

int main ()
{
  system_clock::time_point time_point;

  cout << "epoch:      " << as_string(time_point) << endl;

  time_point += days(2) + hours(23) + minutes(55);
  cout << "later:      " << as_string(time_point) << endl;

  auto diff = time_point - system_clock::time_point();
  cout << "diff:        " << duration_cast<minutes>(diff).count() << " minute(s)" << endl;
  cout << "diff:        " << duration_cast<days>(diff).count() << " days(s)" << endl;

  time_point -= chrono::hours(24 * 365);
  cout << "-1 year:     " << as_string(time_point) << endl;

  time_point -= duration<int, ratio<3600 * 24 * 365>>(50);
  cout << "-50 years:   " << as_string(time_point) << endl;

  time_point -= duration<int, ratio<3600 * 24 * 365>>(50);
  cout << "-50 years:   " << as_string(time_point) << endl;
}
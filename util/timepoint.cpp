//
// Created by martin on 10/30/22.
//

#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

inline auto as_string (const system_clock::time_point &time_point)
{
  auto t { system_clock::to_time_t(time_point) };
  string time_string { ctime(&t) };
  time_string.resize(time_string.size() - 1);
  return time_string;
}

inline auto make_time_point (int year,
                             int mon,
                             int day,
                             int hour,
                             int min,
                             int sec = 0)
{
  struct tm t { };
  t.tm_sec = sec;
  t.tm_min = min;
  t.tm_hour = hour;
  t.tm_mday = day;
  t.tm_mon = mon - 1;
  t.tm_year = year - 1900;
  t.tm_isdst = -1;

  auto tt = mktime(&t);

  if (tt == -1)
    {
      throw runtime_error("no valid system time");
    }

  return system_clock::from_time_t(tt);
}

int main ()
{
  auto tp1 = make_time_point(2010, 01, 01, 00, 00);
  cout << as_string(tp1) << endl;

  auto tp2 = make_time_point(2011, 05, 23, 12, 44);
  cout << as_string(tp2) << endl;
}
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

int main ()
{
  static istringstream iss { "20:20" };

  auto now { system_clock::now() };
  auto t { system_clock::to_time_t(now) };
  auto now_time { localtime(&t) };

  cout << put_time(now_time, "date: %x\ntime: %X\n");

  tm time(*now_time);
  cout << "new time [HH:MM]: ";
  iss >> get_time(&time, "%H:%M");

  if (!iss)
    {
      cerr << "Invalid format read" << endl;
      exit(EXIT_FAILURE);
    }

  auto tp { system_clock::from_time_t(mktime(&time)) };
  auto diff { duration_cast<minutes>(tp - now) };
  cout << "difference: " << diff.count() << " minutes" << endl;
}
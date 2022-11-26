#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

mutex print_mutex;

void print (const string &s)
{
  lock_guard<mutex> lock(print_mutex);
  for (const char &c : s)
    {
      cout.put(c);
    }
  cout << endl;
}

int main ()
{
  auto f1 { async(launch::async, print, "Hello from a first thread") };
  auto f2 { async(launch::async, print, "Hello from a second thread") };

  print("hello from main thread");
}

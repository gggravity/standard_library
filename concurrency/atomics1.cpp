#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

long data;
atomic<bool> ready_flag(false);

void provider ()
{
  cout << "<return>" << endl;
  cin.get();

  ::data = 42;

  ready_flag.store(true);
}

void consumer ()
{
  while (!ready_flag.load())
    {
      cout.put('.').flush();
      this_thread::sleep_for(milliseconds(60));
    }
  cout << "\nvalue: " << ::data << endl;
}

int main ()
{
  auto p { async(launch::async, provider) };
  auto c { async(launch::async, consumer) };
}
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

void do_something (char c)
{
  default_random_engine dre(system_clock::now().time_since_epoch().count());
  uniform_int_distribution<int> id(10, 1000);

  for (int i { 0 } ; i < 10 ; ++i)
    {
      this_thread::sleep_for(milliseconds(id(dre)));
      cout.put(c).flush();
    }
}

int main ()
{
  cout << "starting 2 operations asynchronously" << endl;

  auto f1 { async([]
                  {
                      do_something('.');
                  }) };

  auto f2 { async([]
                  {
                      do_something('+');
                  }) };

  if (f1.wait_for(seconds(0)) != future_status::deferred ||
      f2.wait_for(seconds(0)) != future_status::deferred)
    {
      while (f1.wait_for(seconds(0)) != future_status::ready &&
             f2.wait_for(seconds(0)) != future_status::ready)
        {
//          cout.put('#').flush();
          this_thread::yield();
        }
    }
  cout.put('\n').flush();

  try
    {
      f1.get();
      f2.get();
    }
  catch (const exception &e)
    {
      cout << "\nEXCEPTION: " << e.what() << endl;
    }
  cout << "\ndone" << endl;
}

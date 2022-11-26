#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

int query_number ()
{
  cout << "read number: ";
  int number;
  cin >> number;

  if (!cin)
    {
      throw runtime_error("no number read");
    }
  return number;
}

void do_something (char c, const shared_future<int>& function)
{
  try
    {
      int number { function.get() };

      for (int i { 0 } ; i < number ; ++i)
        {
          this_thread::sleep_for(milliseconds(100));
          cout.put(c).flush();
        }
    }
  catch (const exception &e)
    {
      cerr << "EXCEPTION: " << e.what() << endl;
    }
}

int main ()
{
  try
    {
      shared_future<int> f { async(query_number) };

      auto f1 { async(launch::async, do_something, '.', f)};
      auto f2 { async(launch::async, do_something, '+', f)};
      auto f3 { async(launch::async, do_something, '*', f)};

      f1.get();
      f2.get();
      f3.get();
    }
  catch (const exception &e)
    {
      cerr << "\nEXCEPTION: " << e.what() << endl;
    }
    cout << "\ndone" << endl;
}

#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

void do_something (promise<string> &p)
{
  try
    {
      cout << "read char ('x' for exception): ";
      char c = cin.get();
      if (c == 'x')
        {
          throw runtime_error(string("char ") + c + " read");
        }
      string s = string("char ") + c + " processed";
      p.set_value(std::move(s));
    }
  catch (...)
    {
      p.set_exception(current_exception());
    }
}

int main ()
{
  try
    {
      promise<string> p;
      thread t { do_something, ref(p) };
      t.detach();

      auto f { p.get_future() };
      cout << "result: " << f.get() << endl;
    }
  catch (const exception &e)
    {
      cerr << "EXCEPTION: " << e.what() << endl;
    }
  catch (...)
    {
      cerr << "EXCEPTION " << endl;
    }
}

#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

void do_something (int number, char ch)
{
  try
    {
      default_random_engine dre(42 * ch);
      uniform_int_distribution<int> id(10, 1000);

      for (int i { 0 } ; i < number ; ++i)
        {
          this_thread::sleep_for(milliseconds(id(dre)));
          cout.put(ch).flush();
        }
    }
  catch (const exception &e)
    {
      cerr << "THREAD-EXCEPTION (thread "
           << this_thread::get_id() << "): " << e.what() << endl;
    }
  catch (...)
    {
      cerr << "THREAD-EXCEPTION (thread "
           << this_thread::get_id() << "): " << endl;
    }
}

int main ()
{
  try
    {
      thread t1 { do_something, 5, '.' };
      cout << "- started fg thread " << t1.get_id() << endl;

      for (int i { 0 } ; i < 5 ; ++i)
        {
          thread t { do_something, 10, 'a' + i };
          cout << "- detach started bg thread " << t.get_id() << endl;
          t.detach();
        }

      cin.get();

      cout << "- join fg thread " << t1.get_id() << endl;
      t1.join();
    }
  catch (const exception &e)
    {
      cerr << "EXCEPTION: " << e.what() << endl;
    }
}

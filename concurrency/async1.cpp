#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

int do_something (char c)
{
  default_random_engine dre(c);
  uniform_int_distribution<int> id(10, 1000);

  for (int i { 0 } ; i < 10 ; ++i)
    {
      this_thread::sleep_for(milliseconds(id(dre)));
      cout.put(c).flush();
    }
  return c;
}

int func1 ()
{
  return do_something('.');
}

int func2 ()
{
  return do_something('+');
}

int main ()
{
  cout << "starting func1() in background"
       << " and func2() in foreground:" << endl;

  auto result1 { async(func1) };

  int result2 = func2();

  int result = result1.get() + result2;

  cout << "\nresult of func1() + func2(): " << result << endl;
}

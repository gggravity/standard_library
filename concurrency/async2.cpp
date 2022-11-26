#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

void task1 ()
{
  list<int> v;

  /* WARNING: CRASH TEST */
  while (true)
    {
      for (int i { 0 } ; i < 1000000 ; ++i)
        {
          v.pop_back();
        }
      cout.put('.').flush();
    }
}

int main ()
{
  cout << "starting 2 tasks" << endl;

  cout << " - task1: process endless loop of memory consumption" << endl;
  cout << " - task2: waits for <return> and then for task1" << endl;

  auto f1 { async(task1) };

  cin.get();

  cout << "\nwait for the end of task1: " << endl;
  try
    {
      f1.get();
    }
  catch (const exception &e)
    {
      cerr << "EXCEPTION: " << e.what() << endl;
    }
}

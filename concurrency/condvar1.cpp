#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

bool ready_flag;
mutex ready_mutex;
condition_variable ready_condition;

void thread1 ()
{
  cout << "<return>" << endl;
  cin.get();
  {
    lock_guard<mutex> lock_guard(ready_mutex);
    ready_flag = true;
  }
  ready_condition.notify_one();
}

void thread2 ()
{
  {
    unique_lock<mutex> unique_lock(ready_mutex);
    ready_condition.wait(unique_lock, []
    {
        return ready_flag;
    });
  }
  cout << "done" << endl;
}

int main ()
{
  auto f1 { async(launch::async, thread1) };
  auto f2 { async(launch::async, thread2) };
}
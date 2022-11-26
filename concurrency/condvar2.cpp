#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

queue<int> q;
mutex queue_mutex;
condition_variable queue_condition_variable;

void provider (int value)
{
  for (int i { 0 } ; i < 6 ; ++i)
    {
      {
        lock_guard<mutex> lg(queue_mutex);
        q.push(value + i);
      }
      queue_condition_variable.notify_one();
      this_thread::sleep_for(milliseconds(value));
    }
}

void consumer (int number)
{
  while (true)
    {
      int value;
      {
        unique_lock<mutex> ul(queue_mutex);
        queue_condition_variable.wait(ul, []
        {
            return !q.empty();
        });
        value = q.front();
        q.pop();
      }
      cout << "consumer " << number << ": " << value << endl;
    }
}

int main ()
{
  auto p1 { async(launch::async, provider, 100) };
  auto p2 { async(launch::async, provider, 300) };
  auto p3 { async(launch::async, provider, 500) };

  auto c1 { async(launch::async, consumer, 1) };
  auto c2 { async(launch::async, consumer, 2) };
}
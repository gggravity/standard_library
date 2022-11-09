//
// Created by martin on 11/8/22.
//

#include <bits/stdc++.h>
#include "../stl/print.hpp"

#define RANGE(x) (x).begin(), (x).end()
#define CONST_RANGE(x) (x).cbegin(), (x).cend()

using namespace std;

int main ()
{
  priority_queue<float> q;

  q.push(66.6);
  q.push(22.2);
  q.push(44.4);

  cout << q.top() << ' ';
  q.pop();

  cout << q.top() << endl;
  q.pop();

  q.push(11.1);
  q.push(55.5);
  q.push(33.3);

  q.pop();

  while (!q.empty())
    {
      cout << q.top() << ' ';
      q.pop();
    }
  cout << endl;
}

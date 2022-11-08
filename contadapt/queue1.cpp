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
  queue<string> q;

  q.push("These ");
  q.push("are ");
  q.push("more than ");

  cout << q.front();
  q.pop();

  cout << q.front();
  q.pop();

  q.push("four ");
  q.push("words!");

  q.pop();

  cout << q.front();
  q.pop();

  cout << q.front();
  q.pop();

  cout << endl << "number of elements in the queue: " << q.size() << endl;
}

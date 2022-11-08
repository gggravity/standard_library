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
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);

  cout << st.top() << ' ';
  st.pop();
  cout << st.top() << ' ';
  st.pop();

  st.top() = 77;

  st.push(4);
  st.push(5);

  st.pop();

  while (!st.empty())
    {
      cout << st.top() << ' ';
      st.pop();
    }
  cout << endl;
}

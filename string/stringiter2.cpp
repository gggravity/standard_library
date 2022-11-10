#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  const string hello { "Hello, how are you?" };

  string s { hello.cbegin(), hello.cend() };

  cout << "original:        ";
  for (char c : s)
    {
      cout << c;
    }
  cout << endl;

  reverse(s.begin(), s.end());
  cout << "reverse:         " << s << endl;

  sort(s.begin(), s.end());
  cout << "ordered:         " << s << endl;

  s.erase(unique(s.begin(), s.end()), s.end());
  cout << "no duplicates:   " << s << endl;
}

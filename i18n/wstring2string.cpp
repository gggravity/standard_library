#include <bits/stdc++.h>
#include "wstring2string.hpp"

using namespace std;

int main ()
{
  string s { "hello, world\n" };
  wstring ws { to_wstring(s) };
  wcout << "ws:      " << ws << endl;
  cout << "from ws: " << to_string(ws) << endl;
}
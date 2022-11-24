#include <bits/stdc++.h>
#include "wstring2string.hpp"
#include "wstring2utf8.hpp"

using namespace std;

int main ()
{
  string s = "nj: \ae + \x80 1";
  wstring ws = to_wstring(s, locale("de_DE"));
  cout << wstring_to_utf8(ws) << endl;

}
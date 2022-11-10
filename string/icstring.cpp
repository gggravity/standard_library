#include <bits/stdc++.h>
#include "../stl/print.hpp"
#include "icstring.hpp"

using namespace std;

int main ()
{
  icstring s1 { "hallo" };
  icstring s2 { "otto" };
  icstring s3 { "hALLo" };

  cout << boolalpha;
  cout << s1 << " == " << s2 << " : " << (s1 == s2) << endl;
  cout << s1 << " == " << s3 << " : " << (s1 == s3) << endl;

  auto index { s1.find("All") };

  if (index != icstring::npos)
    {
      cout << R"(index of "All" in ")" << s1 << R"(": )"
           << index << endl;
    }
  else
    {
      cout << R"("All not found in ")" << s1 << endl;
    }
}

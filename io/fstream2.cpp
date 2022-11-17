#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  string s { "hello" };
  ofstream("fstream2.tmp") << s << endl;

  ofstream("fstream2.tmp", ios::app) << "world" << endl;
}
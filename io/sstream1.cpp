#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main (int argc, char *argv[])
{
  ostringstream oss;

  oss << "dec: " << 15 << hex << " hex: " << 15 << endl;

  cout << oss.str() << endl;

  bitset<15> b(5789);
  oss << "float: " << 4.67 << " bitset: " << b << endl;

  oss.seekp(0);

  oss << "oct: " << oct << 15;
  cout << oss.str() << endl;
}
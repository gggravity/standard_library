#include <bits/stdc++.h>

using namespace std;

int main ()
{
  ostream hex_out { cout.rdbuf() };

  hex_out.setf(ios::hex, ios::basefield);
  hex_out.setf(ios::showbase);

  hex_out << "hex_out: " << 177 << "\n";
  cout << "c_out:   " << 177 << "\n";
  hex_out << "hex_out: " << -49 << "\n";
  cout << "c_out:   " << -49 << "\n";
}
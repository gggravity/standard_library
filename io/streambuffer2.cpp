#include <bits/stdc++.h>

using namespace std;

void hex_multiplication_table (streambuf *buffer, int num)
{
  ostream hex_out { buffer };
  hex_out << hex << showbase;

  for (int i { 1 } ; i <= num ; ++i)
    {
      for (int j { 1 } ; j <= 10 ; ++j)
        {
          hex_out << setw(4) << i * j << ' ';
        }
      hex_out << endl;
    }
}

int main ()
{
  int num { 5 };
  cout << "We print " << num << " lines hexadecimal" << endl;

  hex_multiplication_table(cout.rdbuf(), num);

  cout << "That was the output of " << num << " hexadecimal lines " << endl;
}
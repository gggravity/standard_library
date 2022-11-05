//
// Created by martin on 11/5/22.
//

#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  istringstream iss { "No one objects if you are doing\n"
                      "a good programming job for\n"
                      "someone whom you respect.\n" };

  istream_iterator<string> cin_pos(iss);
  ostream_iterator<string> cout_pos(cout, " ");
  auto eof { istream_iterator<string>() };

  while (cin_pos != eof)
    {
      advance(cin_pos, 2);
      if (cin_pos != eof)
        {
          *cout_pos++ = *cin_pos++;
        }
    }
  cout << endl;
}

#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  string input;

  istringstream iss { "   some     test string der var en gang en mand som ÆÅØ\nABC æøå!#%&ÅØÆ" };

  iss.unsetf(ios::skipws);

  const locale &loc(iss.getloc());

  unique_copy(istream_iterator<char>(iss),
              istream_iterator<char>(),
              back_inserter(input),
              [=] (char left, char right)
              {
                  return isspace(left, loc) && isspace(right, loc);
              });

  cout << input;
}

#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

template < typename charT, typename traits >
inline basic_istream<charT, traits> &ignore_line (basic_istream<charT, traits> &strm)
{
  strm.ignore(numeric_limits<streamsize>::max(), strm.widen('\n'));
  return strm;
}

int main ()
{
  istringstream iss1 {"test1\ntest2"};
  istringstream iss2 {"test3\ntest4"};

  string value1;
  string value2;

  iss1 >> value1;
  DUMP(value1);

  iss2 >> ignore_line >> value2;
  DUMP(value2);
}
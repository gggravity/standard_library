#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

class Ignore_line
{
 public:
  explicit Ignore_line (int num = 1) :
      num(num)
  { }

  template < typename charT, typename traits >
  friend basic_istream<charT, traits> &
  operator>> (basic_istream<charT, traits> &strm, const Ignore_line &ignore_line)
  {
    for (int i = 0 ; i < ignore_line.num ; ++i)
      {
        strm.ignore(numeric_limits<streamsize>::max(), strm.widen('\n'));
      }
    return strm;
  }

 private:
  int num;
};

int main ()
{
  istringstream iss1 { "test1\ntest2" };
  istringstream iss2 { "test3\ntest4" };

  string value1;
  string value2;

  iss1 >> value1;
  DUMP(value1);

  iss2 >> Ignore_line(2) >> value2;
  DUMP(value2);
}
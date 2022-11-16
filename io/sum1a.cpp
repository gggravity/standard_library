#include <bits/stdc++.h>

using namespace std;

namespace my_lib
{
  double read_and_process_sum (istream &strm)
  {
    using std::ios;
    double value, sum;

    ios::iostate old_exceptions { strm.exceptions() };

    strm.exceptions(ios::failbit | ios::badbit);

    try
      {
        sum = 0;
        while (strm >> value)
          {
            sum += value;
          }
      }
    catch (...)
      {
        if (!strm.eof())
          {
            strm.exceptions(old_exceptions);
            throw;
          }
      }
    strm.exceptions(old_exceptions);
    return sum;
  }
}
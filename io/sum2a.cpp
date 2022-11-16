#include <bits/stdc++.h>

using namespace std;

namespace my_lib
{
  double read_and_process_sum (istream &strm)
  {
    using std::ios;
    double value, sum;

    sum = 0;
    while (strm >> value)
      {
        sum += value;
      }

    if (!strm.eof())
      {
        throw ios::failure("input error in read_and_process_sum");
      }
    return sum;
  }
}
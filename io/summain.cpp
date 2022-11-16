#include <bits/stdc++.h>

using namespace std;

namespace my_lib
{
  double read_and_process_sum (istream &);
}

int main ()
{
  istringstream iss { "1.1 2.2 3.3" };

  double sum;

  try
    {
      sum = my_lib::read_and_process_sum(iss);
    }
  catch (const ios::failure &error)
    {
      cerr << "I/O exception: " << error.what() << endl;
      return EXIT_FAILURE;
    }
  catch (const exception &error)
    {
      cerr << "standard exception: " << error.what() << endl;
      return EXIT_FAILURE;
    }
  catch (...)
    {
      cerr << "unknown exception" << endl;
      return EXIT_FAILURE;
    }
  cout << "sum: " << sum << endl;
}
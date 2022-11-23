#include <bits/stdc++.h>

using namespace std;

int main ()
{
  try
    {
      locale loc_C;
      cout.imbue(loc_C);
      use_facet<num_put<char>>(loc_C).put(cout, cout, ' ', 1234.5678);
      cout << endl;

      locale loc_G("de_DE");
      cout.imbue(loc_G);
      use_facet<num_put<char>>(loc_G).put(cout, cout, ' ', 1234.5678);
      cout << endl;
    }
  catch (const exception &e)
    {
      cerr << "Exception: " << e.what() << endl;
      return EXIT_FAILURE;
    }
}
#include <bits/stdc++.h>

using namespace std;

int main ()
{
  try
    {
      locale loc_G("de_DE");
      const auto &mp_G = use_facet<money_put<char>>(loc_G);
      cout.imbue(loc_G);
      cout << showbase;

      mp_G.put(cout, false, cout, ' ', 12345.678);
      cout << endl;

      mp_G.put(cout, true, cout, ' ', "12345.678");
      cout << endl;
    }
  catch (const exception &e)
    {
      cerr << "Exception: " << e.what() << endl;
      return EXIT_FAILURE;
    }
}
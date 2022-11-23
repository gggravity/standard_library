#include <bits/stdc++.h>

using namespace std;

int main ()
{
  try
    {
      locale loc_G("de_DE");
      cin.imbue(loc_G);
      cout.imbue(loc_G);
      cout << showbase;

      long double val;
      cout << "monetary value: ";
      cin >> get_money(val, true);

      if (cin)
        {
          cout << put_money(val, true);
        }
      else
        {
          cerr << "invalid format" << endl;
        }
    }
  catch (const exception &e)
    {
      cerr << "Exception: " << e.what() << endl;
      return EXIT_FAILURE;
    }
}
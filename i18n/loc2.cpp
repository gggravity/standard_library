#include <bits/stdc++.h>

using namespace std;

int main ()
{
  try
    {
      locale lang_locale("");
      cout.imbue(lang_locale);
      cout << lang_locale.name() << endl;

      bool is_german { lang_locale.name().substr(0, 2) == "de" ||
                       lang_locale.name().substr(0, 3) == "ger" ||
                       lang_locale.name().substr(0, 3) == "Ger" };

      cout << (is_german ? "Sprachumgebung fuer Wingaben: "
                         : " Locale of input: ") << endl;

      string s;
      cin >> s;
      if (!cin)
        {
          if (is_german)
            {
              cerr << "FEHLER beim Einlesen der Sprachumgebung" << endl;
            }
          else
            {
              cerr << "ERROR while reading the locale" << endl;
            }
          return EXIT_FAILURE;
        }

      locale cin_locale(s);
      cin.imbue(cin_locale);
      cout << (is_german ? "Gleitkommawerte: "
                         : "Floating-point values: ") << endl;
      double value;
      while (cin >> value)
        {
          cout << value << endl;
        }
    }
  catch (const exception &e)
    {
      cerr << "Exception: " << e.what() << endl;
      return EXIT_FAILURE;
    }
}
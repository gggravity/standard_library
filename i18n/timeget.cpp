#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

int main ()
{
  try
    {
      locale loc_G { "de_DE.ISO-8859-1" };
      const auto &tg_G { use_facet<time_get<char>>(loc_G) };

      typedef time_base TB;
      time_get<char>::dateorder d { tg_G.date_order() };

      cout << "dateorder: "
           << (d == TB::no_order ? "on order" :
               d == TB::mdy ? "mdy" :
               d == TB::dmy ? "dmy" :
               d == TB::ymd ? "ymd" :
               d == TB::ydm ? "ydm" : "unknown") << endl;

      cout << "<wochentag> <hh> :<mm>: ";

      string format { "%A %H: %M" };
      struct tm val { };
      ios_base::iostate err { ios_base::goodbit };

      tg_G.get(istreambuf_iterator<char>(cin),
               istreambuf_iterator<char>(),
               cin, err, &val,
               format.c_str(), format.c_str() + format.size());
      if (err != ios_base::goodbit)
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
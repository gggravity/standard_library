#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

int main ()
{
  try
    {
      auto now { system_clock::now() };
      std::time_t t { system_clock::to_time_t(now) };
      tm *now_tm { std::localtime(&t) };

      locale loc_C;
      const auto &tp_C { use_facet<time_put<char>>(loc_C) };

      tp_C.put(cout, cout, ' ', now_tm, 'x');
      cout << endl;

      string format { "%A %x %I%p\n" };
      tp_C.put(cout, cout, ' ', now_tm,
               format.c_str(), format.c_str() + format.size());

      locale loc_G("de_DE@euro");
      const time_put<char> &tp_G { use_facet<time_put<char>>(loc_G) };

      tp_G.put(cout, cout, ' ', now_tm, 'x');
      cout << endl;

      tp_G.put(cout, cout, ' ', now_tm,
               format.c_str(), format.c_str() + format.size());
    }
  catch (const exception &e)
    {
      cerr << "Exception: " << e.what() << endl;
      return EXIT_FAILURE;
    }
}
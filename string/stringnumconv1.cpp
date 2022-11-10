#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  try
    {
      cout << stoi("  77") << endl;
      cout << stod("  77.77") << endl;
      cout << stoi("-0x77") << endl;

      size_t index;
      cout << stoi("    42 is the truth", &index) << endl;
      cout << "  index of first unprocessed char: " << index << endl;

      cout << stoi("   42", nullptr, 16) << endl;
      cout << stol("789", &index, 8) << endl;
      cout << "  index of first unprocessed char: " << index << endl;

      long long ll { numeric_limits<long long>::max() };
      string s { to_string(ll) };
      cout << s << endl;

      cout << stoi(s) << endl;

    }
  catch (exception &e)
    {
      fprintf(stdout, "%s\n", terminal_colors::red(e.what()).c_str());
    }
}

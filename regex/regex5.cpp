#include <bits/stdc++.h>
#include "regex_execption.hpp"

using namespace std;

int main ()
{
  try
    {
      regex pat(R"(\\.*index\{([^}]*)\})",
                regex_constants::grep |
                regex_constants::icase);
    }
  catch (const regex_error &e)
    {
        cerr << "regex_error:  \n"
        << " what():  " << e.what() << "\n"
        << " code():  " << regex_code(e.code()) << endl;
    }
}
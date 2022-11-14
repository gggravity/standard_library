#include <bits/stdc++.h>

using namespace std;

int main ()
{
  string data { "<person>\n"
                " <first>Nico</first>\n"
                " <last>Josuttis</last>\n"
                "</person>" };

  regex reg("<(.*)>(.*)</(\\1)>");

  cout << regex_replace(data, reg, R"(<$1 value ="$2"/>)") << endl;

  cout << regex_replace(data, reg, R"(<\1 value="\2"/>)",
                        regex_constants::format_sed) << endl;

  string res2;

  regex_replace(back_inserter(res2), data.begin(), data.end(),
                reg, R"(<$1 value ="$2"/>)",
                regex_constants::format_no_copy |
                regex_constants::format_first_only);
  cout << '\n' << res2 << endl;

}
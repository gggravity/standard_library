#include <bits/stdc++.h>

using namespace std;

int main ()
{
  string data { "<person>\n"
                " <first>Nico</first>\n"
                " <last>Josuttis</last>\n"
                "</person>" };

  regex reg("<(.*)>(.*)</\\1>");

  auto pos { data.cbegin() };
  auto end { data.cend() };

  smatch match;

  for (; regex_search(pos, end, match, reg) ; pos = match.suffix().first)
    {
      cout << "match:    " << match.str() << endl;
      cout << " tag:     " << match.str(1) << endl;
      cout << " value:   " << match.str(2) << endl;
    }
}
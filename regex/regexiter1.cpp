#include <bits/stdc++.h>

using namespace std;

int main ()
{
  string data { "<person>\n"
                " <first>Nico</first>\n"
                " <last>Josuttis</last>\n"
                "</person>" };

  regex reg("<(.*)>(.*)</(\\1)>");

  sregex_iterator pos(data.cbegin(), data.cend(), reg);
  sregex_iterator end;

  for (; pos != end ; ++pos)
    {
      cout << "match:    " << pos->str() << endl;
      cout << " tag:     " << pos->str(1) << endl;
      cout << " value:   " << pos->str(2) << endl;
    }

  sregex_iterator beg(data.cbegin(), data.cend(), reg);

  for_each(beg, end, [] (const smatch &match)
  {
      cout << "match:    " << match.str() << endl;
      cout << " tag:     " << match.str(1) << endl;
      cout << " value:   " << match.str(2) << endl;
  });
}
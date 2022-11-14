#include <bits/stdc++.h>

using namespace std;

int main ()
{
  string pat1 = R"(\\.*index\{([^}]*)\})";
  string pat2 = R"(\\.*index\{(.*)\}\{(.*)\})";
  regex pat(pat1 + "\n" + pat2,
            regex_constants::egrep |
            regex_constants::icase);

  istringstream iss {R"(\index{STL}%\n\MAININDEX{standard template}%\n\SeeINDEX{standard template library}{STL}%)"};


  string data((istreambuf_iterator<char>(iss)),
              istreambuf_iterator<char>());

  smatch match;
  auto pos { data.cbegin() };
  auto end { data.cend() };
  for (; regex_search(pos, end, match, pat) ; pos = match.suffix().first)
    {
      cout << "match:  " << match.str() << endl;
      cout << "  val:  " << match.str(1) + match.str(2) << endl;
      cout << "  see:  " << match.str(3) << endl;
    }
}
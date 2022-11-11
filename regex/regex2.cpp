#include <bits/stdc++.h>

using namespace std;

void out (bool b)
{
  cout << (b ? "found" : "not found") << endl;
}

int main ()
{
  string data { "XML tag: <tag-name>the value</tag-name>." };
  cout << "data:                   " << data << endl;

  smatch match;
  bool found { regex_search(data, match, regex("<(.*)>(.*)</\\1>")) };

  cout << "match.empty():          " << boolalpha << match.empty() << endl;
  cout << "match.size():           " << match.size() << endl;

  if (found)
    {
      cout << "match.str():            " << boolalpha << match.str() << endl;
      cout << "match.length():         " << boolalpha << match.length() << endl;
      cout << "match.position():       " << boolalpha << match.position() << endl;
      cout << "match.prefix().str():   " << boolalpha << match.prefix().str() << endl;
      cout << "match.suffix().str():   " << boolalpha << match.suffix().str() << endl;
      cout << endl;

      for (int i = 0 ; i < match.size() ; ++i)
        {
          cout << "match[" << i << "].str():         " << match[i].str() << endl;
          cout << "match.str(" << i << "):           " << match.str(i) << endl;
          cout << "match.position(" << i << "):      " << match.position(i) << endl;
        }
      cout << endl;

      cout << "matches: " << endl;
      for (auto pos { match.begin() } ; pos != match.end() ; ++pos)
        {
          cout << " " << *pos << " ";
          cout << "(length: " << pos->length() << ")" << endl;
        }
    }
}
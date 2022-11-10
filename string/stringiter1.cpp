#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  string s { "The zip code of Braunschweig in Germany is 38100" };
  cout << "original: " << s << endl;

  transform(s.cbegin(), s.cend(),
            s.begin(),
            [] (char c)
            {
                return tolower(c);
            });

  cout << "lowered:  " << s << endl;

  transform(s.cbegin(), s.cend(),
            s.begin(),
            [] (char c)
            {
                return toupper(c);
            });

  cout << "uppered:  " << s << endl;

  string g { "Germany" };

  auto pos { search(s.cbegin(), s.cend(),
                    g.cbegin(), g.cend(),
                    [] (char left, char right)
                    {
                        return toupper(left) == toupper(right);
                    })
  };

  if (pos != s.cend())
    {
      cout << "substring \"" << g << "\" found at index "
           << pos - s.cbegin() << endl;
    }
}

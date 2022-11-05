//
// Created by martin on 11/5/22.
//
#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;
using namespace placeholders;

char my_toupper (char c)
{
  locale loc;
  return use_facet<ctype<char>>(loc).toupper(c);
}

int main ()
{
  string s("Internationalization");
  string sub("Nation");

  auto pos { search(
      s.begin(), s.end(),
      sub.begin(), sub.end(),
      bind(equal_to<>(),
           bind(my_toupper, _1),
           bind(my_toupper, _2)
      )) };
  if (pos != s.end())
    {
      cout << "\"" << sub << "\" is part of \"" << s << "\"" << endl;
    }
}
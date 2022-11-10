#include <bits/stdc++.h>

using namespace std;

struct ignore_case_traits : char_traits<char>
{
    static bool eq (const char &left, const char &right)
    {
      return toupper(left) == toupper(right);
    }

    static bool lt (const char &left, const char &right)
    {
      return toupper(left) < toupper(right);
    }

    static bool compare (const char *left, const char *right, size_t n)
    {
      for (size_t i = 0 ; i < n ; ++i)
        {
          if (!eq(left[i], right[i]))
            {
              return lt(left[i], right[i] ? -1 : 1);
            }
        }
      return false;
    }

    static const char *find (const char *c_string, size_t n, const char &c)
    {
      for (size_t i = 0 ; i < n ; ++i)
        {
          if (eq(c_string[i], c))
            {
              return &(c_string[i]);
            }
        }
      return nullptr;
    }
};

using icstring = basic_string<char, ignore_case_traits>;

inline ostream &operator<< (ostream &os, const icstring &s)
{
  return os << string(s.begin(), s.end());
}
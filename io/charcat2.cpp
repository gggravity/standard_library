#include <bits/stdc++.h>

using namespace std;

int main ()
{
  istreambuf_iterator<char> in_pos { cin };
  istreambuf_iterator<char> end_pos;

  ostreambuf_iterator<char> out_pos { cout };

  while (in_pos != end_pos)
    {
      *out_pos = *in_pos;
      ++in_pos;
      ++out_pos;
    }
}
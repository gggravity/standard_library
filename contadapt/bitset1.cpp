//
// Created by martin on 11/8/22.
//

#include <bits/stdc++.h>
#include "../stl/print.hpp"

#define RANGE(x) (x).begin(), (x).end()
#define CONST_RANGE(x) (x).cbegin(), (x).cend()

using namespace std;

int main ()
{
  enum Color { red, yellow, green, blue, white, black, num_colors };

  bitset<num_colors> used_colors;

  used_colors.set(red);
  used_colors.set(blue);

  cout << "bitfield of used colors:    " << used_colors << endl;
  cout << "number   of used colors:    " << used_colors.count() << endl;
  cout << "bitfield of unused colors:  " << ~used_colors << endl;

  if(used_colors.any())
    {
      for (int c {0}; c < num_colors; ++c)
        {
          if (used_colors[(Color)c])
            {
              cout << (Color)c << endl;
            }
        }
    }
}

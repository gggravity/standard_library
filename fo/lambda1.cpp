//
// Created by martin on 11/5/22.
//
#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  auto plus10 { [] (int i)
                {
                    return i + 10;
                } };
  cout << "+10:              " << plus10(7) << endl;

  auto plus10time2 { [] (int i)
                     {
                         return (i + 10) * 2;
                     } };
  cout << "+10 * 2:          " << plus10time2(7) << endl;

  auto pow3 { [] (int i)
              {
                  return i * i * i;
              } };
  cout << "x*x*x:            " << pow3(7) << endl;

  auto inverse_divide { [] (double d1, double d2)
                        {
                            return d2 / d1;
                        }

  };
  cout << "inverse_divide:   " << inverse_divide(49, 7) << endl;
}
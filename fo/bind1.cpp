//
// Created by martin on 11/5/22.
//
#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

int main ()
{
  auto plus10 { bind(plus<>(),
                     placeholders::_1, 10) };
  cout << "+10:              " << plus10(7) << endl;

  auto plus10time2 { bind(multiplies<>(),
                          bind(plus<>(),
                               placeholders::_1, 10), 2) };
  cout << "+10 * 2:          " << plus10time2(7) << endl;

  auto pow3 { bind(multiplies<>(),
                   bind(multiplies<>(),
                        placeholders::_1,
                        placeholders::_1),
                   placeholders::_1) };
  cout << "x*x*x:            " << pow3(7) << endl;

  auto inverse_divide { bind(plus<>(), placeholders::_1, 10) };
  cout << "inverse_divide:   " << inverse_divide(49, 7) << endl;
}
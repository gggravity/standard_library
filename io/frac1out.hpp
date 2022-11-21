#pragma once

#include <bits/stdc++.h>
#include "Fraction.h"

using namespace std;

inline ostream &operator<< (ostream &os, const Fraction &f)
{
  os << f.numerator() << '/' << f.denominator();
  return os;
}
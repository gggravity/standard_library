#pragma once

#include <bits/stdc++.h>
#include "Fraction.h"

using namespace std;

template < typename char_T, typename traits >
inline basic_ostream<char_T, traits> &
operator<< (basic_ostream<char_T, traits> &bos, const Fraction &f)
{
  basic_ostringstream<char_T, traits> s;
  s.copyfmt(bos);
  s.width(0);

  s << f.numerator() << '/' << f.denominator();

  bos << s.str();

  return bos;
}
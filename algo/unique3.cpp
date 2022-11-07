//
// Created by martin on 11/7/22.
//
#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;
using namespace placeholders;

bool both_spaces (char left, char right)
{
  return left == ' ' && right == ' ';
}

int main ()
{
  istringstream iss { "        Hello, here are      sometimes more     "
                      "and                sometimes     fewer       spaces." };
  iss.unsetf(ios::skipws);

  unique_copy(istream_iterator<char>(iss),
              istream_iterator<char>(),
              ostream_iterator<char>(cout),
              both_spaces);
}
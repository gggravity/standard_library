//
// Created by martin on 11/6/22.
//
#include <bits/stdc++.h>

#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

int main ()
{
  istringstream iss { "This is a TEST 1 2 3 4 5 6 7 8 9" };

  copy(istream_iterator<string>(iss),
       istream_iterator<string>(),
       ostream_iterator<string>(cout, " | "));
}
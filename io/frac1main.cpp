#include <bits/stdc++.h>
#include "frac1out.hpp"
#include "Fraction.h"

using namespace std;

int main (int argc, char *argv[])
{
  Fraction vat(19, 100);
  cout << "VAT: \"" << left << setw(8) << vat << '"' << endl;
}
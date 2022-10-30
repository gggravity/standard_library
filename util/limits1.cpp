//
// Created by martin on 10/30/22.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  cout << boolalpha << setfill('.');

  cout << left << setw(20) << "max(short)" << right << setw(20) << numeric_limits<short>::max() << endl;
  cout << left << setw(20) << "max(int)" << right << setw(20) << numeric_limits<int>::max() << endl;
  cout << left << setw(20) << "max(long)" << right << setw(20) << numeric_limits<long>::max() << endl;

  cout << endl;

  cout << left << setw(20) << "max(float)" << right << setw(20) << numeric_limits<float>::max() << endl;
  cout << left << setw(20) << "max(double)" << right << setw(20) << numeric_limits<double>::max() << endl;
  cout << left << setw(20) << "max(long double)" << right << setw(20) << numeric_limits<long double>::max() << endl;

  cout << endl;

  cout << left << setw(20) << "is_signed(char)" << right << setw(20) << numeric_limits<char>::is_signed << endl;

  cout << endl;

  cout << left << setw(20) << "is_specialized" << right << setw(20) << numeric_limits<char>::is_specialized << endl;
}
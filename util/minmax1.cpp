//
// Created by martin on 10/30/22.
//

#include <bits/stdc++.h>

using namespace std;

bool int_ptr_less (const int *a, const int *b)
{
  return *a < *b;
}

int main ()
{
  int x { 7 };
  int y { 42 };
  int z { 33 };

  int *px { &x };
  int *py { &y };
  int *pz { &z };

  auto p_pax { max(px, py, int_ptr_less) };

  auto extremes { minmax({ px, py, pz }, int_ptr_less) };

  cout << "p_pax: " << *p_pax << endl;

  cout << "extremes min: " << *extremes.first << endl;

  cout << "extremes max: " << *extremes.second << endl;
}

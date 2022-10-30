//
// Created by martin on 10/30/22.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  using Five_thirds = ratio<5, 3>;
  cout << Five_thirds::num << "/" << Five_thirds::den << endl;

  using Also_five_thirds = ratio<25, 15>;
  cout << Also_five_thirds::num << "/" << Also_five_thirds::den << endl;

  using one = ratio<42, 42>;
  cout << one::num << "/" << one::den << endl;

  using zero = ratio<0>;
  cout << zero::num << "/" << zero::den << endl;

  using Neg = ratio<7, -3>;
  cout << Neg::num << "/" << Neg::den << endl;
}
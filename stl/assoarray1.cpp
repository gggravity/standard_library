//
// Created by martin on 10/31/22.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  unordered_map<string, float> coll;

  coll["VAT1"] = 0.16;
  coll["VAT2"] = 0.07;
  coll["Pi"] = 3.1415;
  coll["an arbitrary number"] = 4983.223;
  coll["Null"] = 0;
  coll["VAT1"] += 0.03;

  cout << "VAT difference: " << coll["VAT1"] - coll["VAT2"] << endl;

  cout << endl << "############################" << endl << endl;

  cout << fixed << setprecision(2) << setfill('.');

  for (const auto &elem : coll)
    {
      cout << setw(24) << left << elem.first + ": " << setw(10) << right << elem.second << endl;
    }
}
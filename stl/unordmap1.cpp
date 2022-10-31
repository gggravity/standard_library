//
// Created by martin on 10/31/22.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  unordered_map<string, double> coll {
      { "tim", 9.9 },
      { "struppi", 11.77 }
  };

  for (auto &elem : coll)
    {
      elem.second += elem.second;
    }

  cout << fixed << setprecision(2);

  for (const auto &elem : coll)
    {
      cout << setw(12) << left << elem.first + ": " << elem.second << endl;
    }
}
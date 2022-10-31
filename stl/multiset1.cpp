//
// Created by martin on 10/31/22.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  multiset<string> cities { "Braunschweig", "Hanover", "Frankfurt",
                            "New York", "Chicago", "Toronto", "Paris",
                            "Frankfurt" };

  for (const auto &elem : cities)
    {
      cout << elem << " : ";
    }
  cout << endl;

  cities.insert({ "London", "Munich", "Hanover", "Braunschweig" });

  for (const auto &elem : cities)
    {
      cout << elem << " : ";
    }
  cout << endl;
}
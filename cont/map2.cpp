//
// Created by martin on 11/4/22.
//


#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  using String_float_map = map<string, float>;

  String_float_map stocks;

  stocks["BASF"] = 369.50;
  stocks["VW"] = 413.50;
  stocks["Daimler"] = 819.00;
  stocks["BMW"] = 834.00;
  stocks["Siemens"] = 842.20;

  String_float_map::iterator pos;
  cout << left;
  for (pos = stocks.begin() ; pos != stocks.end() ; ++pos)
    {
      cout << "stock: " << setw(12) << pos->first << "price: " << pos->second << endl;
    }
  cout << endl;

  for (pos = stocks.begin() ; pos != stocks.end() ; ++pos)
    {
      pos->second *= 2;
    }

  for (pos = stocks.begin() ; pos != stocks.end() ; ++pos)
    {
      cout << "stock: " << setw(12) << pos->first << "price: " << pos->second << endl;
    }
  cout << endl;

  stocks["Volkswagen"] = stocks["VW"];
  stocks.erase("VW");

  for (pos = stocks.begin() ; pos != stocks.end() ; ++pos)
    {
      cout << "stock: " << setw(12) << pos->first << "price: " << pos->second << endl;
    }
  cout << endl;
}
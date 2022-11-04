//
// Created by martin on 11/4/22.
//


#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

void print_values (const string &word, multimap<string, string> &dict)
{
  cout << word << ": " << endl;
  for (auto pos { dict.lower_bound(word) } ; pos != dict.upper_bound(word) ; ++pos)
    {
      cout << "    " << pos->second << endl;
    }
}

void print_keys (const string &word, multimap<string, string> &dict)
{
  cout << word << ": " << endl;
  for (const auto &[key, value] : dict)
    {
      if (value == word)
        {
          cout << "    " << key << endl;
        }
    }
}

int main ()
{
  multimap<string, string> dict;

  dict.insert({ { "day",     "Tag" },
                { "strange", "fremd" },
                { "car",     "Auto" },
                { "smart",   "elegant" },
                { "trait",   "Merkmal" },
                { "strange", "seltsam" },
                { "smart",   "raffiniert" },
                { "smart",   "klug" },
                { "clever",  "raffiniert" }
              });

//  cout.setf(ios::left, ios::adjustfield);
  cout << left;
  cout << ' ' << setw(10) << "english " << "german " << endl;
  cout << setfill('-') << setw(20) << "" << setfill(' ') << endl;
  for (const auto &[key, value] : dict)
    {
      cout << ' ' << setw(10) << key << value << endl;
    }
  cout << endl;

  set<string> unique_keys;
  set<string> unique_values;

  for (const auto &[key, value] : dict)
    {
      unique_keys.insert(key);
      unique_values.insert(value);
    }

  cout << endl << "### English to German ###" << endl << endl;

  for (const auto &key : unique_keys)
    {
      print_values(key, dict);
    }

  cout << endl << "#### German to English ###" << endl << endl;

  for (const auto &values : unique_values)
    {
      print_keys(values, dict);
    }
}
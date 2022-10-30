//
// Created by martin on 10/30/22.
//

#pragma once

#include <bits/stdc++.h>

using namespace std;

void print (const vector<shared_ptr<string>> &v)
{
  for (const auto &item : v)
    {
      cout << *item << " ";
    }
  cout << endl;
}

int main ()
{
  shared_ptr<string> nico { new string("nico") };
  shared_ptr<string> jutta { new string("jutta") };

  (*nico)[0] = 'N';
  jutta->replace(0, 1, "J");

  vector<shared_ptr<string>> who_made_coffee;
  who_made_coffee.push_back(jutta);
  who_made_coffee.push_back(jutta);
  who_made_coffee.push_back(nico);
  who_made_coffee.push_back(jutta);
  who_made_coffee.push_back(nico);

  print(who_made_coffee);

  *nico = "Nicolai";

  print(who_made_coffee);

  cout << "use_count nico:  " << nico.use_count() << endl;
  cout << "use_count jutta: " << jutta.use_count() << endl;
}
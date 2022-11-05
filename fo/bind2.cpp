//
// Created by martin on 11/5/22.
//
#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;
using namespace placeholders;

struct Person
{
  Person (string name) :
      name(std::move(name))
  { }

  void print () const
  {
    cout << name << endl;
  }

  void print2 (const string &prefix) const
  {
    cout << prefix << name << endl;
  }

 private:
  string name;
};

int main ()
{
  vector<Person> persons { { "Tick" },
                           { "Trick" },
                           { "Track" } };

  for_each(persons.begin(), persons.end(),
           bind(&Person::print, _1));
  cout << endl;

  for_each(persons.begin(), persons.end(),
           bind(&Person::print2, _1, "Person: "));
  cout << endl;

  bind(&Person::print2, _1, "This is: ")(Person("nico"));
}
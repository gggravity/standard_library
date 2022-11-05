//
// Created by martin on 11/5/22.
//
#include <bits/stdc++.h>

#include <utility>
#include "../stl/print.hpp"

using namespace std;

struct Person
{
    string firstname;

    string lastname;

    Person (string firstname, string lastname) :
        firstname(std::move(firstname)),
        lastname(std::move(lastname))
    { }
};

struct Person_sort_criterion
{
    bool operator() (const Person &left, const Person &right) const
    {
      return left.firstname < right.firstname ||
             left.firstname == right.firstname && left.lastname < right.lastname;
    }
};

int main ()
{
  set<Person, Person_sort_criterion> persons;
  persons.emplace("Mark", "Twain");
  persons.emplace("Apollo", "Set");
  persons.emplace("Mr.", "Pink");

  for (const auto &person : persons)
    {
      cout << person.firstname << " " << person.lastname << endl;
    }

}
//
// Created by martin on 11/1/22.
//

#include <bits/stdc++.h>
#include "print.hpp"

using namespace std;

struct Person
{
    string first_name;

    string last_name;

    friend ostream &operator<< (ostream &os, const Person &person)
    {
      os << "\"" << person.first_name << " " << person.last_name << "\"";
      return os;
    }
};

bool person_sort_criterion (const Person &left, const Person &right)
{
  return left.last_name < right.last_name
         || (left.last_name == right.last_name && left.first_name < right.first_name);
}

int main ()
{
  deque<Person> collection;
  collection.push_back({ "James", "Brown" });
  collection.push_back({ "Adam", "Smith" });
  collection.push_back({ "Bruce", "Lee" });
  collection.push_back({ "Mother", "Teresa" });

  print_elements(collection, "original:  ");

  sort(collection.begin(), collection.end(), person_sort_criterion);

  print_elements(collection, "sorted:    ");
}
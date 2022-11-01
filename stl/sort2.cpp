#include <bits/stdc++.h>

#include <utility>
#include "print.hpp"

using namespace std;

struct Person
{
    Person (string first_name, string last_name) :
        first_name(std::move(first_name)),
        last_name(std::move(last_name))
    {

    }

    string first_name;

    string last_name;

    friend ostream &operator<< (ostream &os, const Person &person)
    {
      os << "\"" << person.first_name << " " << person.last_name << "\"";
      return os;
    }
};

int main ()
{
  deque<Person> coll;
  coll.emplace_back("James", "Brown");
  coll.emplace_back("Adam", "Smith");
  coll.emplace_back("Bruce", "Lee");
  coll.emplace_back("Mother", "Teresa");

  print_elements(coll, "original ");

  sort(coll.begin(), coll.end(),
       [] (const Person &left, const Person &right)
       {
           return left.last_name < right.last_name
                  || (left.last_name == right.last_name && left.first_name < right.first_name);
       });

  print_elements(coll, "sorted   ");
}
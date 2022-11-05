//
// Created by martin on 11/5/22.
//
#include <bits/stdc++.h>

#include <utility>

#include "../stl/print.hpp"

using namespace std;

struct Person
{
  Person (string name) :
      m_name(std::move(name))
  {

  }

  void print () const
  {
    cout << m_name << endl;
  }

  void print2 (const string &prefix) const
  {
    cout << prefix << m_name << endl;
  }

 private:
  string m_name;
};

int main ()
{
  vector<Person> coll { { "Tick" }, { "Trick" }, { "Track" } };

  for_each(coll.begin(),coll.end(),
           [](const Person& person)
           {
               person.print();
           });
  cout << endl;


  for_each(coll.begin(),coll.end(),
           [](const Person& person)
           {
               person.print2("Person: ");
           });
  cout << endl;
}
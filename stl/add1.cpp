//
// Created by martin on 11/1/22.
//
#include <bits/stdc++.h>
#include "print.hpp"

using namespace std;

struct Add_value
{
    explicit Add_value (int the_value) :
        the_value(the_value)
    {

    }

    void operator() (int &elem) const
    {
      elem += the_value;
    }

    int the_value;
};

int main ()
{
  vector<int> collection;

  for (int i { 1 } ; i <= 9 ; ++i)
    {
      collection.push_back(i);
    }

  print_elements(collection, "initialized                ");

  for_each(collection.begin(), collection.end(), Add_value(10));

  print_elements(collection, "after adding 10            ");

  for_each(collection.begin(), collection.end(), Add_value(*collection.begin()));

  print_elements(collection, "after adding forst element ");
}
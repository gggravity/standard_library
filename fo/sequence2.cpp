//
// Created by martin on 11/5/22.
//
#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

struct Int_sequence
{
  explicit Int_sequence (int initial_value) :
      value(initial_value)
  {

  }

  int operator() ()
  {
    return value++;
  }

 private:
  int value;
};

int main ()
{
  list<int> coll;
  Int_sequence sequence(1);

  generate_n<back_insert_iterator<list<int>>, int, Int_sequence &>
      (back_inserter(coll), 4, sequence);
  PRINT_ELEMENTS(coll);

  generate_n(back_inserter(coll), 4, Int_sequence(42));
  PRINT_ELEMENTS(coll);

  generate_n(back_inserter(coll), 4, sequence);
  PRINT_ELEMENTS(coll);

  generate_n(back_inserter(coll), 4, sequence);
  PRINT_ELEMENTS(coll);
}
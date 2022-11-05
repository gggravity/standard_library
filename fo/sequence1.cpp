//
// Created by martin on 11/5/22.
//
#include <bits/stdc++.h>

#include <utility>
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

  generate_n(back_inserter(coll), 9,
             Int_sequence(1));
  PRINT_ELEMENTS(coll);

  generate(next(coll.begin()), prev(coll.end()),
           Int_sequence(42));
  PRINT_ELEMENTS(coll);
}
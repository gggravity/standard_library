//
// Created by martin on 11/7/22.
//
#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;
using namespace placeholders;

int main ()
{
  vector<int> coll;

  INSERT_ELEMENTS(coll, 2, 6);
  INSERT_ELEMENTS(coll, 4, 9);
  INSERT_ELEMENTS(coll, 1, 7);
  print_elements(coll, "coll            ");

  auto pos { remove(coll, 5) };
  print_elements(coll, "size not changed");

  coll.erase(pos, coll.cend());
  print_elements(coll, "size changed    ");

  coll.erase(remove_if(coll, [] (int element)
             {
                 return element < 4;
             }),
             coll.end()
  );

  print_elements(coll, "< 4 removed     ");
}
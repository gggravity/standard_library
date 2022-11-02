//
// Created by martin on 11/2/22.
//

#include <bits/stdc++.h>
#include "print.hpp"

using namespace std;
using namespace std::placeholders;

int main ()
{
  set<int, greater<>> coll1 { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  deque<int> coll2;

  print_elements(coll1, "initialized   ");

  transform(coll1.cbegin(), coll1.cend(),
            back_inserter(coll2),
            bind(multiplies<>(), _1, 10));

  print_elements(coll2, "transformed    ");

  replace_if(coll2.begin(), coll2.end(),
             bind(equal_to<>(), _1, 70), 42);

  print_elements(coll2, "replaced       ");

  coll2.erase(remove_if(coll2.begin(), coll2.end(),
                        bind(logical_and<>(),
                             bind(greater_equal<>(), _1, 50),
                             bind(less_equal<>(), _1, 80))),
              coll2.end());

  print_elements(coll2, "removed        ");
}
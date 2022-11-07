//
// Created by martin on 11/7/22.
//
#include <bits/stdc++.h>
#include "algostuff.hpp"
#include "../stl/print.hpp"
#include "../algorithms.hpp"

using namespace std;

int main ()
{
  vector<int> coll1;
  vector<int> coll2;

  INSERT_ELEMENTS(coll1, 1, 9);
  INSERT_ELEMENTS(coll2, 1, 9);

  PRINT_ELEMENTS(coll1);
  PRINT_ELEMENTS(coll2);

  auto pos1 { partition(coll1,
                        [] (int element)
                        {
                            return element % 2 == 0;
                        })
  };

  auto pos2 { stable_partition(coll2,
                               [] (int element)
                               {
                                   return element % 2 == 0;
                               })
  };

  cout << endl;

  PRINT_ELEMENTS(coll1);
  cout << "first odd element: " << *pos1 << endl;

  PRINT_ELEMENTS(coll2);
  cout << "first odd element: " << *pos2 << endl;
}

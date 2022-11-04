//
// Created by martin on 11/3/22.
//

#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

struct Runtime_compare
{
    enum compare_mode { normal, reverse };

    explicit Runtime_compare (compare_mode mode = normal) :
        mode(mode)
    {

    }

    template < typename T >
    bool operator() (const T &t1, const T &t2) const
    {
      return mode == normal ? t1 < t2
                            : t2 < t1;
    }

    bool operator== (const Runtime_compare &runtime_compare) const
    {
      return mode == runtime_compare.mode;
    }

    compare_mode mode;
};


using Int_set = set<int, Runtime_compare>;

int main ()
{
  Int_set coll1 { 4, 7, 5, 1, 6, 2, 5 };
  PRINT_ELEMENTS(coll1);

  Runtime_compare reverse_order { Runtime_compare::reverse };

  Int_set coll2 { reverse_order };

  coll2 = { 4, 7, 5, 1, 6, 2, 5 };

  PRINT_ELEMENTS(coll2);

  coll1 = coll2;
  coll1.insert(3);
  PRINT_ELEMENTS(coll1);

  if (coll1.value_comp() == coll2.value_comp())
    {
      cout << "coll1 and coll2 have same sorting criterion" << endl;
    }
  else
    {
      cout << "coll1 and coll2 have a different sorting criterion" << endl;
    }
}
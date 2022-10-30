//
// Created by martin on 10/30/22.
//

#include <bits/stdc++.h>

using namespace std;

class Foo
{
 public:
  explicit Foo (tuple<int, float>)
  {
    cout << "Foo::Foo(tuple)" << endl;
  }

  template < typename ... Args >
  explicit Foo (Args ... args)
  {
    cout << "Foo::Foo(args...)" << endl;
  }
};

int main ()
{
  tuple<int, float> t { 1, 2.33 };

  pair<int, Foo> p1 { 42, t };

  pair<int, Foo> p2 { piecewise_construct, make_tuple(42), t };
}
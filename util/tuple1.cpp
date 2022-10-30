//
// Created by martin on 10/30/22.
//

#include <bits/stdc++.h>

using namespace std;

template < typename T >
void print_tuple_3 (T t)
{
  cout << get<0>(t) << " ";
  cout << get<1>(t) << " ";
  cout << get<2>(t) << " ";
  cout << endl;
}

int main ()
{
  tuple<string, int, int, complex<double>> t;

  tuple<int, float, string> t1 { 41, 6.3, "nico" };

  print_tuple_3(t1);

  auto t2 = make_tuple(22, 44, "nico");

  get<1>(t1) = get<1>(t2);

  print_tuple_3(t1);
  

  if (t1 < t2)
    {
      t1 = t2;
    }

  print_tuple_3(t1);
}
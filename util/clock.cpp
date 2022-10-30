//
// Created by martin on 10/30/22.
//

#include <bits/stdc++.h>

using namespace std;

template < typename C >
void print_clock_data ()
{
  cout << "- precision: ";

  using P = typename C::period;

  if (ratio_less_equal<P, milli>::value)
    {
      using TT = typename ratio_multiply<P, kilo>::type;
      cout << fixed << double(TT::num) / TT::den << " milliseconds" << endl;
    }
  else
    {
      cout << fixed << double(P::num) / P::den << " seconds" << endl;
    }
  cout << "- is_steady: " << boolalpha << C::is_steady << endl;
}

int main ()
{
  cout << "system_clock: " << endl;
  print_clock_data<chrono::system_clock>();

  cout << "high_resolution_clock: " << endl;
  print_clock_data<chrono::high_resolution_clock>();

  cout << "steady_clock: " << endl;
  print_clock_data<chrono::steady_clock>();
}
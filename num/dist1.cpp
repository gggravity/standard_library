#include <bits/stdc++.h>

using namespace std;

template < typename Distribution, typename Engine >
void distribution (Distribution distribution, Engine engine, const string &name)
{
  cout << name << ":" << endl;
  cout << " - min(): " << distribution.min() << endl;
  cout << " - max(): " << distribution.max() << endl;
  cout << " - values: "
       << distribution(engine) << ' '
       << distribution(engine) << ' '
       << distribution(engine) << ' '
       << distribution(engine) << endl;

  map<long long, int> value_counter;
  for (int i { 0 } ; i < 200000 ; ++i)
    {
      value_counter[distribution(engine)]++;
    }

  cout << "====" << endl;
  for (auto [key, value] : value_counter)
    {
      cout << setw(3) << key << ": " << value << endl;
    }
  cout << "====" << endl << endl;
}

int main ()
{
  knuth_b e;
  uniform_real_distribution<> ud(0, 10);
  distribution(ud, e, "uniform_real_distribution");

  normal_distribution<> nd;
  distribution(nd, e, "normal_distribution");

  exponential_distribution<> ed;
  distribution(ed, e, "exponential_distribution");

  gamma_distribution<> gd;
  distribution(gd, e, "gamma_distribution");
}

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  default_random_engine random_engine;

  uniform_int_distribution<int> int_distribution(10, 20);

  for (int i { 0 } ; i < 20 ; ++i)
    {
      cout << int_distribution(random_engine) << " ";
    }
  cout << endl;

  uniform_real_distribution<double> real_distribution(10, 20);

  for (int i { 0 } ; i < 20 ; ++i)
    {
      cout << real_distribution(random_engine) << " ";
    }
  cout << endl;

  vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  shuffle(v.begin(), v.end(), random_engine);

  for (const auto &i : v)
    {
      cout << i << " ";
    }
  cout << endl;
}
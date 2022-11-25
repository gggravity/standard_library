#include <bits/stdc++.h>

using namespace std;

void print_numbers (default_random_engine &dre)
{
  for (int i { 0 } ; i < 6 ; ++i)
    {
      cout << dre() << " ";
    }
  cout << endl;
}

int main ()
{
  default_random_engine dre;
  print_numbers(dre);

  default_random_engine dre2;
  print_numbers(dre2);

  default_random_engine dre3(42);
  print_numbers(dre3);

  stringstream engine_state;
  engine_state << dre;

  print_numbers(dre);

  engine_state >> dre;
  print_numbers(dre);

  engine_state.clear();
  engine_state.seekg(0);
  engine_state >> dre;
  dre.discard(2);
  print_numbers(dre);
}

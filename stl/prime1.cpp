//
// Created by martin on 11/1/22.
//

#include <bits/stdc++.h>
#include "print.hpp"

using namespace std;

bool is_prime (int number)
{
  number = abs(number);

  if (number == 0 || number == 1)
    {
      return false;
    }

  int divisor;
  for (divisor = number / 2 ; number % divisor != 0 ; --divisor)
    {
      /* empty loop */
    }

  return divisor == 1;
}

int main ()
{
  list<int> collection;

  for (int i { 0 } ; i <= 100 ; ++i)
    {
      collection.push_back(i);
    }

  auto pos { find_if(collection.cbegin(), collection.cend(), is_prime) };

  if (pos != collection.cend())
    {
      cout << *pos << " is first prime number found" << endl;

      cout << "prime number(s): ";
      while (pos != collection.cend())
        {
          cout << *pos << " ";
          pos = find_if(++pos, collection.cend(), is_prime);
        }
    }
  else
    {
      cout << "no prime number found" << endl;
    }
}
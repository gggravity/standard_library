#include <bits/stdc++.h>

using namespace std;

int main ()
{
  double x, y;

  istringstream iss { "1.1 2.2" };

  cout << "Multiplication of two floating point values" << endl;

//  cout << "first operand:     ";
  if (!(iss >> x))
    {
      cerr << "error while reading the first floating value" << endl;
      return EXIT_FAILURE;
    }

//  cout << "second operand:  ";
  if (!(iss >> y))
    {
      cerr << "error while reading the second floating value" << endl;
      return EXIT_FAILURE;
    }

  cout << x << " times " << y << " equals " << x * y << endl;
}
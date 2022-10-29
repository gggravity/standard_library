#include <bits/stdc++.h>

using namespace std;

function<int (int, int)> return_lambda ()
{
  return [] (int x, int y)
  {
      return x * y;
  };
}

int main ()
{
  auto lf = return_lambda ();
  cout << lf (6, 7) << endl;
}

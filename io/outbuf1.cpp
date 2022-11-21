#include <bits/stdc++.h>
#include "outbuf1.hpp"

using namespace std;

int main ()
{
  outbuf ob;
  std::ostream out(&ob);

  out << "31 hexadecimal:" << std::hex << 31 << std::endl;
}


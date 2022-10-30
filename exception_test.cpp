#include <bits/stdc++.h>
#include "util/exception.hpp"

using namespace std;

int main (int argc, char *argv[])
{
  try
    {
      throw system_error();
    }
  catch (...)
    {
      process_exception();
    }
}
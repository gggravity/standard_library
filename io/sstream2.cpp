#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

auto parse_name (const string& name)
{
  string s1, s2, s3;
  istringstream(name) >> s1 >> s2 >> s3;

  if (s3.empty())
    {
      return tuple<string, string, string>(std::move(s1), "", std::move(s2));
    }
  else
    {
      return tuple<string, string, string>(std::move(s1), std::move(s2), std::move(s3));
    }
}

int main (int argc, char *argv[])
{
  auto t1 = parse_name("Nicolai M. Josuttis");
  cout << "firstname: " << get<0>(t1) << endl;
  cout << "middle:    " << get<1>(t1) << endl;
  cout << "lastname:  " << get<2>(t1) << endl;

  auto t2 = parse_name("Nico Josuttis");
  cout << "firstname: " << get<0>(t2) << endl;
  cout << "middle:    " << get<1>(t2) << endl;
  cout << "lastname:  " << get<2>(t2) << endl;
}
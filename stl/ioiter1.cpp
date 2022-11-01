//
// Created by martin on 11/1/22.
//
#include <bits/stdc++.h>

using namespace std;

int main ()
{
  istringstream iss {"der var en gang en mand"};

  vector<string> coll;

  copy(istream_iterator<string>(iss),
       istream_iterator<string>(),
       back_inserter(coll));

  sort(coll.begin(), coll.end());

  unique_copy(coll.cbegin(), coll.cend(),
              ostream_iterator<string>(std::cout, "\n"));
}
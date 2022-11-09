#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main (int argc, char *argv[])
{
  const string delimiters(" \t,.;");
  string line;

  istringstream iss { "der var, en gang\ten\nmand. som boede i en spand;\n" };

  while (getline(iss, line))
    {
      string::size_type begin_index, end_index;
      begin_index = line.find_first_not_of(delimiters);

      while (begin_index != string::npos)
        {
          end_index = line.find_first_of(delimiters, begin_index);
          if (end_index == string::npos)
            {
              end_index = line.length();
            }
          for (int i = int(end_index) - 1 ; i >= static_cast<int>(begin_index) ; --i)
            {
              cout << line[i];
            }
          cout << ' ';
          begin_index = line.find_first_not_of(delimiters, end_index);
        }
    }
}

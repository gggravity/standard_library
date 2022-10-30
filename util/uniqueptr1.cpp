//
// Created by martin on 10/30/22.
//

#include <bits/stdc++.h>
#include <dirent.h>

using namespace std;

struct Dir_closer
{
    void operator() (DIR *dp)
    {
      if (closedir(dp) != 0)
        {
          cerr << "OOPS: closedir() failed" << endl;
        }
    }
};

int main ()
{
  unique_ptr<DIR, Dir_closer> dir_ptr { opendir(".") };

  struct dirent *dp;

  while ((dp = readdir(dir_ptr.get())) != nullptr)
    {
      string filename { dp->d_name };
      cout << "process " << filename << endl;
    }

}
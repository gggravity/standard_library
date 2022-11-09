#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

int main (int argc, char *argv[])
{
  string filename;
  string basename;
  string ext_name;
  string tmp_name;
  const string suffix { "tmp" };

  for (int i = 1 ; i < argc ; ++i)
    {
      filename = argv[i];
      auto idx { filename.find('.') };
      if (idx == string::npos)
        {
          tmp_name = filename + '.' + suffix;
        }
      else
        {
          basename = filename.substr(0, idx);
          ext_name = filename.substr(idx + 1);
          if (ext_name.empty())
            {
              tmp_name = filename;
              tmp_name += suffix;
            }
          else if (ext_name == suffix)
            {
              tmp_name = filename;
              tmp_name.replace(idx + 1, ext_name.size(), "xxx");
            }
          else
            {
              tmp_name = filename;
              tmp_name.replace(idx+1, string::npos, suffix);
            }
        }
      cout << filename << " => " << tmp_name << endl;
    }
}

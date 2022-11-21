#include <bits/stdc++.h>

using namespace std;

void redirect (ostream &os)
{
  auto del = [&] (streambuf *p)
  {
      os.rdbuf(p);
  };

  unique_ptr<streambuf, decltype(del)> orig_buffer(os.rdbuf(), del);

  ofstream file { "../io/redirect.txt" };
  os.rdbuf(file.rdbuf());

  file << "one row for the file" << endl;
  os << "one row for the stream" << endl;
}

int main ()
{
  cout << "the first row" << endl;

  redirect(cout);

  cout << "the last row" << endl;
}
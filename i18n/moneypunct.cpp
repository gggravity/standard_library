#include <bits/stdc++.h>

using namespace std;

ostream &operator<< (ostream &os, moneypunct<char>::pattern pattern)
{
  for (int i { 0 } ; i < 4 ; ++i)
    {
      auto field { pattern.field[i] };

      os << (field == money_base::none ? "none" :
             field == money_base::space ? "space" :
             field == money_base::symbol ? "symbol" :
             field == money_base::sign ? "sign" :
             field == money_base::value ? "value" :
             "???") << " ";
    }
  return os;
}

template < bool intl >
void print_money_punctuation (const string &local_name)
{
  locale loc(local_name);

  const moneypunct<char, intl> &mp { use_facet<moneypunct<char, intl>>(loc) };

  cout << "moneypunct in local \"" << loc.name() << "\":" << endl;

  cout << " decimal_point:  " << (mp.decimal_point() != '\0' ?
                                  mp.decimal_point() : ' ') << endl;

  cout << " thousands_sep:  " << (mp.thousands_sep() != '\0' ?
                                  mp.thousands_sep() : ' ') << endl;

  cout << " grouping:       ";
  for (int i { 0 } ; i < mp.grouping().size() ; ++i)
    {
      cout << static_cast<int>(mp.grouping()[i]) << ' ';
    }
  cout << endl;

  cout << " curr_symbol:    " << mp.curr_symbol() << endl;
  cout << " positive_sign:  " << mp.positive_sign() << endl;
  cout << " negative_sign:  " << mp.negative_sign() << endl;
  cout << " frac_digits:    " << mp.frac_digits() << endl;
  cout << " pos_format:     " << mp.pos_format() << endl;
  cout << " neg_format:     " << mp.neg_format() << endl;
}

int main ()
{
  try
    {
      print_money_punctuation<false>("C");
      cout << endl;

      print_money_punctuation<false>("german");
      cout << endl;

      print_money_punctuation<true>("german");
      cout << endl;
    }
  catch (const exception &e)
    {
      cerr << "Exception: " << e.what() << endl;
      return EXIT_FAILURE;
    }
}
//
// Created by martin on 11/4/22.
//
#include <bits/stdc++.h>
#include "../stl/print.hpp"

using namespace std;

class Runtime_string_compare
{
 public:
  enum compare_mode { normal, no_case };

  explicit Runtime_string_compare (const compare_mode mode = normal) :
      mode(mode)
  {

  }

  bool operator() (const string &left, const string &right) const
  {
    if (mode == normal)
      {
        return left < right;
      }
    else
      {
        return lexicographical_compare(left.begin(), left.end(),
                                       right.begin(), right.end(),
                                       no_case_compare);
      }
  }

 private:
  static bool no_case_compare (char left, char right)
  {
    return toupper(left) < toupper(right);
  }

  const compare_mode mode;
};

using String_string_map = map<string, string, Runtime_string_compare>;

void fill_and_print (String_string_map &collection)
{
  collection["Deutschland"] = "Germany";
  collection["deutsch"] = "German";
  collection["Hanken"] = "snag";
  collection["arbeiten"] = "work";
  collection["Hund"] = "dog";
  collection["gehen"] = "go";
  collection["Unternehmen"] = "enterprise";
  collection["Unternehmen"] = "undertaker";
  collection["gehen"] = "walk";
  collection["Bestatter"] = "undertaker";

  cout.setf(ios::left, ios::adjustfield);
  for (const auto &elem : collection)
    {
      cout << setw(15) << elem.first << " " << elem.second << endl;
    }
  cout << endl;
}

int main ()
{
  String_string_map coll1;
  fill_and_print(coll1);

  Runtime_string_compare ignore_case(Runtime_string_compare::no_case);

  String_string_map coll2(ignore_case);
  fill_and_print(coll2);
}
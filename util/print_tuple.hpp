#pragma once

#include <bits/stdc++.h>

template < int IDX, int MAX, typename ... Args >
struct print_tuple
{
    static void print (std::ostream &strm, const std::tuple<Args...> &t)
    {
      strm << std::get<IDX>(t) << (IDX + 1 == MAX ? "" : ", ");
      print_tuple<IDX + 1, MAX, Args...>::print(strm, t);
    }
};

template < int MAX, typename ... Args >
struct print_tuple<MAX, MAX, Args...>
{
    static void print (std::ostream &strm, const std::tuple<Args...> &t)
    {

    }
};

template < typename ... Args >
std::ostream &operator<< (std::ostream &strm, const std::tuple<Args...> &t)
{
  strm << "[ ";
  print_tuple<0, sizeof ...(Args), Args...>::print(strm, t);
  return strm << " ]";
}
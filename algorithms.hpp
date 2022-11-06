//
// Created by martin on 11/6/22.
//

#pragma once

#include <algorithm>

template < typename Container1, typename Container2 >
// requires Container<C>()
void copy (Container1 &from_container, Container2 &to_container)
{
  std::copy(from_container.begin(), from_container.end(), to_container.begin());
}

template < typename Container >
// requires Container<C>()
void sort (Container &c)
{
  std::sort(c.begin(), c.end());
}

template < typename Container, typename Predicate >
// requires Container<C>() && Binary_Predicate<Value_type<C>>()
void sort (Container &c, Predicate predicate)
{
  std::sort(c.begin(), c.end(), predicate);
}

template < typename Container, typename Value >
// requires Container<C>() && Equality_comparable<C,Val>()
auto find (Container &c, Value value)
{
  return std::find(c.begin(), c.end(), value);
}

template < typename Container, typename Predicate >
// requires Container<C>() && Predicate<Predicate,Value_type<C>>()
auto find_if (Container &c, Predicate predicate)
{
  return std::find_if(c.begin(), c.end(), predicate);
}

template < typename T, typename U >
auto is_permutation (const T &container1, const U &container2)
{
  return std::is_permutation(container1.cbegin(), container1.cend(), container2.cbegin());
}

template < typename T, typename U, typename P >
auto is_permutation (const T &container1, const U &container2, const P &predicate)
{
  return std::is_permutation(container1.cbegin(), container1.cend(), container2.cbegin(), predicate);
}
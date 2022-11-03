#pragma once

#include <bits/stdc++.h>

template < typename Input_iterator, typename Tp >
inline Input_iterator find_before (Input_iterator first, Input_iterator last, const Tp &val)
{
  if (first == last)
    {
      return first;
    }
  Input_iterator next(first);
  ++next;

  while (next != last && *next != val)
    {
      ++next;
      ++first;
    }
  return first;
}

template < typename Input_iterator, typename Predicate >
inline Input_iterator find_before_if (Input_iterator first, Input_iterator last, Predicate pred)
{
  if (first == last)
    {
      return first;
    }
  Input_iterator next(first);
  ++next;

  while (next != last && !pred(*next))
    {
      ++next;
      ++first;
    }
  return first;
}
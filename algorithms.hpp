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

// is_permutation
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

// mismatch
template < typename T, typename U >
auto mismatch (const T &container1, const U &container2)
{
  return std::mismatch(container1.cbegin(), container1.cend(), container2.cbegin());
}

template < typename T, typename U, typename P >
auto mismatch (const T &container1, const U &container2, const P &predicate)
{
  return std::mismatch(container1.cbegin(), container1.cend(), container2.cbegin(), predicate);
}

//lexicographical_compare
template < typename T, typename U >
auto lexicographical_compare (const T &container1, const U &container2)
{
  return std::lexicographical_compare(container1.cbegin(), container1.cend(),
                                      container2.cbegin(), container2.cend());
}

template < typename T, typename U, typename P >
auto lexicographical_compare (const T &container1, const U &container2, const P &predicate)
{
  return std::lexicographical_compare(container1.cbegin(), container1.cend(), container2.cbegin(), predicate);
}

//is_sorted
template < typename T >
// Returns true if the container is sorted into ascending order.
auto is_sorted (const T &container)
{
  return std::is_sorted(container.cbegin(), container.cend());
}

template < typename T, typename P >
// Returns true if the container is sorted into ascending order.
auto is_sorted (const T &container, const P &predicate)
{
  return std::is_sorted(container.cbegin(), container.cend(), predicate);
}

// is_sorted_until
template < typename T >
auto is_sorted_until (const T &container)
// Returns an iterator to the first element in the container which does not follow an ascending order.
{
  return std::is_sorted_until(container.cbegin(), container.cend());
}

template < typename T, typename P >
auto is_sorted_until (const T &container, const P &predicate)
// Returns an iterator to the first element in the container which does not follow an ascending order.
{
  return std::is_sorted_until(container.cbegin(), container.cend(), predicate);
}

// is_partitioned
template < typename T >
// Checks whether the sequence is partitioned.
auto is_partitioned (const T &container)
{
  return std::is_partitioned(container.cbegin(), container.cend());
}

template < typename T, typename P >
// Checks whether the sequence is partitioned.
auto is_partitioned (const T &container, const P &predicate)
{
  return std::is_partitioned(container.cbegin(), container.cend(), predicate);
}

// partition_point
template < typename T >
// Find the partition point of a partitioned range.
auto partition_point (const T &container)
{
  return std::partition_point(container.cbegin(), container.cend());
}

template < typename T, typename P >
// Find the partition point of a partitioned range.
auto partition_point (const T &container, const P &predicate)
{
  return std::partition_point(container.cbegin(), container.cend(), predicate);
}

// is_heap
template < typename T >
// Determines whether a range is a heap (Maximum element first).
auto is_heap (const T &container)
{
  return std::is_heap(container.cbegin(), container.cend());
}

template < typename T, typename P >
// Determines whether a range is a heap (Maximum element first) using comparison functor.
auto is_heap (const T &container, const P &predicate)
{
  return std::is_heap(container.cbegin(), container.cend(), predicate);
}

// is_heap_until
template < typename T >
/**
* Search the end of a heap.
* @return  An iterator pointing to the first element not in the heap.
*/
auto is_heap_until (const T &container)
{
  return std::is_heap_until(container.cbegin(), container.cend());
}

template < typename T, typename P >
/***
* Search the end of a heap using comparison functor.
* @return  An iterator pointing to the first element not in the heap.
*/
auto is_heap_until (const T &container, const P &predicate)
{
 return std::is_heap_until(container.cbegin(), container.cend(), predicate);
}
//
// Created by martin on 11/6/22.
//

#pragma once

#include <algorithm>

template < typename Container, typename U >
// requires Container<Container>()
void move (Container &source, U destination)
{
  std::move(source.begin(), source.end(), destination);
}

//template < typename Container1, typename Container2 >
//// requires Container<Container1>()
//void copy (Container1 &from_container, Container2 &to_container)
//{
//  std::copy(from_container.begin(), from_container.end(), to_container.begin());
//}

template < typename Container, typename U >
// requires Container<Container>()
void copy (Container &source, U destination)
{
  std::copy(source.begin(), source.end(), destination);
}

template < typename Container1, typename Container2, typename Predicate >
// requires Container<C>()
void copy (Container1 &from_container, Container2 &to_container, Predicate predicate)
{
  std::copy(from_container.begin(), from_container.end(), to_container.begin(), predicate);
}

// sort
template < typename Container >
// requires Container<C>()
void sort (Container &c)
{
  std::sort(c.begin(), c.end());
}

// stable_sort
template < typename Container >
// requires Container<C>()
void stable_sort (Container &c)
{
  std::stable_sort(c.begin(), c.end());
}

template < typename Container, typename Predicate >
// requires Container<C>()
void stable_sort (Container &c, const Predicate &predicate)
{
  std::stable_sort(c.begin(), c.end(), predicate);
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

// all_of
template < typename T, typename P >
auto all_of (const T &container, const P &predicate)
{
  return std::all_of(container.cbegin(), container.cend(), predicate);
}

// any_of
template < typename T, typename P >
auto any_of (const T &container, const P &predicate)
{
  return std::any_of(container.cbegin(), container.cend(), predicate);
}

// none_of
template < typename T, typename P >
auto none_of (const T &container, const P &predicate)
{
  return std::none_of(container.cbegin(), container.cend(), predicate);
}

// transform
template < typename T, typename P >
auto transform (const T &source, T &destination, const P &predicate)
{
  typename T::iterator output = std::transform(source.begin(), source.end(),
                                               destination.begin(), predicate);

  return output;
}

template < typename T1, typename T2, typename P >
auto transform (const T1 &source, T2 destination, const P &predicate)
{
  return std::transform(source.begin(), source.end(),
                        destination, predicate);
}

// fill
template < typename T, typename U >
auto fill (T &container, const U &value)
{
  return std::fill(container.begin(), container.end(), value);
}

// generate
template < typename T, typename U >
auto generate (T &container, const U &value)
{
  return std::generate(container.begin(), container.end(), value);
}

// iota
template < typename T, typename U >
auto iota (T &container, const U &value)
{
  return std::iota(container.begin(), container.end(), value);
}

// replace
template < typename T, typename U >
auto replace (T &container, const U &from, const U &to)
{
  return std::replace(container.begin(), container.end(), from, to);
}

// replace_if
template < typename T, typename P, typename U >
auto replace_if (T &container, const P &predicate, const U &to)
{
  return std::replace_if(container.begin(), container.end(), predicate, to);
}

// replace_copy
template < typename T1, typename Iter, typename U >
auto replace_copy (T1 &container1, Iter iter, const U &from, const U &to)
{
  return std::replace_copy(container1.begin(), container1.end(),
                           iter, from, to);
}

// replace_copy_if
template < typename T1, typename Iter, typename P, typename U >
auto replace_copy_if (T1 &container1, Iter iter, const P &predicate, const U &to)
{
  return std::replace_copy_if(container1.begin(), container1.end(),
                              iter, predicate, to);
}

// remove
template < typename T, typename U >
auto remove (T &container, const U &value)
{
  return std::remove(container.begin(), container.end(), value);
}

// remove_if
template < typename T, typename U >
auto remove_if (T &container, const U &predicate)
{
  return std::remove_if(container.begin(), container.end(), predicate);
}

// unique
template < typename T >
auto unique (T &container)
{
  return std::unique(container.begin(), container.end());
}

template < typename T, typename U >
auto unique (T &container, const U &predicate)
{
  return std::unique(container.begin(), container.end(), predicate);
}

// reverse
template < typename T >
auto reverse (T &container)
{
  return std::reverse(container.begin(), container.end());
}

// rotate
template < typename T, typename U >
auto rotate (T &container, const U &iter)
{
  return std::rotate(container.begin(), iter, container.end());
}

// rotate_copy
template < typename T, typename U, typename O >
auto rotate_copy (T &container, const U &iter, O output_iterator)
{
  return std::rotate_copy(container.begin(), iter,
                          container.end(), output_iterator);
}

// next_permutation
template < typename T >
auto next_permutation (T &container)
{
  return std::next_permutation(container.begin(), container.end());
}

// prev_permutation
template < typename T >
auto prev_permutation (T &container)
{
  return std::prev_permutation(container.begin(), container.end());
}

// shuffle
template < typename T >
auto shuffle (T &container)
{
  auto seed = std::chrono::system_clock::now().time_since_epoch().count();
  return std::shuffle(container.begin(), container.end(), std::default_random_engine(seed));
}

// partition
template < typename T, typename P >
auto partition (T &container, const P &predicate)
{

  return std::partition(container.begin(), container.end(), predicate);
}

// stable_partition
template < typename T, typename P >
auto stable_partition (T &container, const P &predicate)
{

  return std::stable_partition(container.begin(), container.end(), predicate);
}

// partition_copy
template < typename T, typename I1, typename I2, typename P >
auto partition_copy (const T &container, I1 out_true, I2 out_false, const P &predicate)
{

  return std::partition_copy(container.begin(), container.end(),
                             out_true, out_false, predicate);
}

// partial_sort
template < typename T, typename U >
auto partial_sort (T &container, const U &sort_end)
{
  return std::partial_sort(container.begin(), sort_end, container.end());
}

template < typename T, typename U, typename P >
auto partial_sort (T &container, const U &sort_end, const P &predicate)
{
  return std::partial_sort(container.begin(), sort_end, container.end(),
                           predicate);
}

// partial_sort_copy
template < typename T1, typename T2 >
auto partial_sort_copy (const T1 &from, T2 &to)
{
  return std::partial_sort_copy(from.cbegin(), from.cend(),
                                to.begin(), to.end());
}

template < typename T1, typename T2, typename P >
auto partial_sort_copy (const T1 &from, T2 &to, const P &predicate)
{
  return std::partial_sort_copy(from.cbegin(), from.cend(),
                                to.begin(), to.end(),
                                predicate);
}

// nth_element
template < typename T, typename U >
auto nth_element (T &container, const U &nth_element)
{
  return std::nth_element(container.begin(), nth_element, container.end());
}

template < typename T, typename U, typename P >
auto nth_element (T &container, const U &nth_element, const P &predicate)
{
  return std::nth_element(container.begin(), nth_element, container.end(),
                          predicate);
}

// make_heap
template < typename Container>
auto make_heap (Container &container)
{
  return std::make_heap(container.begin(), container.end());
}

// pop_heap
template < typename Container>
auto pop_heap (Container &container)
{
  return std::pop_heap(container.begin(), container.end());
}

// push_heap
template < typename Container>
auto push_heap (Container &container)
{
  return std::push_heap(container.begin(), container.end());
}

// sort_heap
template < typename Container>
auto sort_heap (Container &container)
{
  return std::sort_heap(container.begin(), container.end());
}

// binary_search
template < typename Container, typename T>
auto binary_search (Container &container, const T&value)
{
  return std::binary_search(container.begin(), container.end(), value);
}

// includes
template < typename Container1, typename Container2>
auto includes (const Container1 &container1, const Container2 &container2)
{
  return std::includes(container1.cbegin(), container1.cend(),
                       container2.cbegin(), container2.cend());
}

// lower_bound
template < typename Container, typename T>
auto lower_bound (const Container &container, const T&value)
{
  return std::lower_bound(container.cbegin(), container.cend(), value);
}

// upper_bound
template < typename Container, typename T>
auto upper_bound (const Container &container, const T&value)
{
  return std::upper_bound(container.cbegin(), container.cend(), value);
}
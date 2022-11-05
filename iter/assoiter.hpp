//
// Created by martin on 11/5/22.
//
#pragma once

#include <bits/stdc++.h>

using namespace std;

template < typename Container >
class associative_insert_iterator : public iterator<output_iterator_tag,
    typename Container::value_type>
{
 public:
  explicit associative_insert_iterator (Container &container) :
      container(container)
  {

  }

  associative_insert_iterator &operator= (const typename Container::value_type &value)
  {
    container.insert(value);
    return *this;
  }

  associative_insert_iterator<Container> &operator* ()
  {
    return *this;
  }

  associative_insert_iterator<Container> &operator++ ()
  {
    return *this;
  }

  associative_insert_iterator<Container> &operator++ (int)
  {
    return *this;
  }

 protected:
  Container &container;
};

template < typename Container >
inline auto associative_inserter (Container &container)
{
  return associative_insert_iterator<Container>(container);
}
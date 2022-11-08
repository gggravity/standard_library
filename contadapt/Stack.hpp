//
// Created by martin on 11/8/22.
//

#pragma once

#include <deque>
#include <exception>

template < typename T >
class Stack
{
 public:
  struct Read_empty_stack : std::exception
  {
      [[nodiscard]] const char *what () const noexcept override
      {
        return "read empty stack";
      }
  };

  typename std::deque<T>::size_type size () const
  {
    return c.size();
  }

  [[nodiscard]] bool empty () const
  {
    return c.empty();
  }

  void push (const T &element)
  {
    c.push_back(element);
  }

  T pop ()
  {
    if (c.empty())
      {
        throw Read_empty_stack();
      }
    T element = c.back();
    c.pop_back();
    return element;
  }

  T &top ()
  {
    if (c.empty())
      {
        throw Read_empty_stack();
      }
    return c.back();
  }

 protected:
  std::deque<T> c;
};
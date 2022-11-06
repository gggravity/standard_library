//
// Created by martin on 11/6/22.
//
#pragma once

#include <bits/stdc++.h>

template < typename T >
inline void INSERT_ELEMENTS (T &collection, int first, int last)
{
  for (int i = first ; i <= last ; ++i)
    {
      collection.insert(collection.end(), i);
    }
}

template < typename T >
inline void PRINT_ELEMENTS (const T &collection, const std::string& optional_cstr = "")
{
  std::cout << optional_cstr;
  for (auto element : collection)
    {
      std::cout << element << ' ';
    }
    std::cout << std::endl;
}

template < typename T >
inline void PRINT_MAPPED_ELEMENTS (const T &collection, const std::string& optional_cstr = "")
{
  std::cout << optional_cstr;
  for (auto elem : collection)
    {
      std::cout << '[' << elem.first << ',' << elem.second << "] ";
      std::cout << std::endl;
    }
}
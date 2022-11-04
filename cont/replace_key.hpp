//
// Created by martin on 11/4/22.
//

#pragma once

template < typename Container >
inline bool replace_key (Container &container,
                     const typename Container::key_type &old_key,
                     const typename Container::key_type &new_key)
{
//  typename Container::iterator pos;
  auto position = container.find(old_key);
  if (position != container.end())
    {
//      container.insert(typename Container::value_type(new_key, position->second));
      container.insert({ new_key, position->second });
      container.erase(position);
      return true;
    }
  else
    {
      return false;
    }
}
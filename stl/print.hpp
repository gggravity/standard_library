#include <string>
#include <iostream>

#define PRINT_ELEMENTS(varname) print_elements(varname, #varname)

template < typename Collection >
void print_elements (Collection collection, const std::string &prefix)
{
  std::cout << prefix << ": ";
  for (auto elem : collection)
    {
      std::cout << elem << ' ';
    }
  std::cout << std::endl;
}
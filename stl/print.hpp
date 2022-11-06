#include <string>
#include <iostream>
#include <iomanip>
#include "/home/martin/src/terminal_colors/terminal_colors.h"

#define DUMP(varname) (cout << terminal_colors::blue(string(#varname) + ": ") << varname << endl)

#define PRINT_ELEMENTS(varname) print_elements(varname, #varname)

template < typename Collection >
void print_elements (Collection collection, const std::string &prefix)
{
  std::cout << terminal_colors::green(prefix + ": ");
  for (auto elem : collection)
    {
      std::cout << std::setw(2) << elem << ' ';
    }
  std::cout << std::endl;
}

#define PRINT_MAP(varname) print_map(varname, #varname)

template < typename Collection >
void print_map (Collection collection, const std::string &prefix)
{
  std::cout << terminal_colors::green(prefix + ": ");
  for (auto [key, value] : collection)
    {
      std::cout << "{ " << key << ", " << value << " }" << ' ';
    }
  std::cout << std::endl;
}
//
// Created by martin on 11/4/22.
//
#include <bits/stdc++.h>

#include "buckets.hpp"
#include "../stl/print.hpp"

using namespace std;

int main ()
{
  unordered_multimap<string, string> dict
      {
          { "day",     "Tag" },
          { "strange", "fremd" },
          { "car",     "Auto" },
          { "smart",   "elegant" },
          { "trait",   "Merkmal" },
          { "strange", "seltsam" },
      };

  print_hash_table_state(dict);

  dict.insert({
                  { "smart", "raffiniert" },
                  { "smart", "klug" },
                  { "clever", "raffiniert" }
              });

  print_hash_table_state(dict);

  dict.max_load_factor(0.7);

  print_hash_table_state(dict);

}

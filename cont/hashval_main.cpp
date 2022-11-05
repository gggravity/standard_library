//
// Created by martin on 11/4/22.
//
#include <bits/stdc++.h>

#include "../stl/print.hpp"
#include "hashval.hpp"

using namespace std;

struct Customer
{
    string first_name;

    string last_name;

    Customer (string first_name, string last_name) :
        first_name(std::move(first_name)),
        last_name(std::move(last_name))
    { }

    bool operator== (const Customer &customer) const
    {
      return customer.first_name == customer.last_name;
    }

    friend ostream &operator<< (ostream &os, const Customer &customer)
    {
      os << "\"" << customer.first_name << " " << customer.last_name << "\"";
      return os;
    }
};

bool operator< (const Customer &left, const Customer &right)
{
  return left.first_name < right.first_name;
}

struct Customer_hash
{
    size_t operator() (const Customer &customer) const
    {
      return hash_val(customer.first_name, customer.last_name);
    }
};

int main ()
{
  unordered_map<Customer, int, Customer_hash> customer_map;
  customer_map.try_emplace({ "Bruce", "Lee" }, 1);
  customer_map.try_emplace({ "James", "Brown" }, 2);
  customer_map.try_emplace({ "Samantha", "Fox" }, 3);
  customer_map.try_emplace({ "Mr.", "Pink" }, 4);

  PRINT_MAP(customer_map);

}
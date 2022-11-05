//
// Created by martin on 11/4/22.
//
#include <bits/stdc++.h>

#include "hashval.hpp"
#include "../stl/print.hpp"

using namespace std;

class Customer
{
 public:
  Customer (string firstname, string lastname, long number) :
      firstname(std::move(firstname)),
      lastname(std::move(lastname)),
      number(number)
  {

  }

  friend ostream &operator<< (ostream &os, const Customer &customer)
  {
    return os << "["
              << customer.firstname << ","
              << customer.lastname << ","
              << customer.number
              << "]";
  }

  friend class Customer_hash;

  friend class Customer_equal;

 private:
  string firstname;

  string lastname;

  long number;
};

struct Customer_hash
{
    size_t operator() (const Customer &customer) const
    {
      return hash_val((customer.firstname, customer.lastname, customer.number));
    }
};

struct Customer_equal
{
    bool operator() (const Customer &left, const Customer &right) const
    {
      return left.number == right.number;
    }
};

int main ()
{
  unordered_set<Customer, Customer_hash, Customer_equal> customer_set;

  customer_set.emplace("Nico", "Josuttis", 42);
  customer_set.emplace("Tom", "Hanks", 45);
  customer_set.emplace("Clark", "Kent", 18);

  PRINT_ELEMENTS(customer_set);
}
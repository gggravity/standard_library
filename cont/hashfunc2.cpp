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
      m_firstname(std::move(firstname)),
      m_lastname(std::move(lastname)),
      m_number(number)
  {

  }

  friend ostream &operator<< (ostream &os, const Customer &customer)
  {
    return os << "["
              << customer.firstname() << ","
              << customer.lastname() << ","
              << customer.number()
              << "]";
  }

  [[nodiscard]] const string &firstname () const
  {
    return m_firstname;
  }

  [[nodiscard]] const string &lastname () const
  {
    return m_lastname;
  }

  [[nodiscard]] long number () const
  {
    return m_number;
  }

 private:
  string m_firstname;

  string m_lastname;

  long m_number;
};

int main ()
{
  auto hash {
      [] (const Customer &customer)
      {
          return hash_val((customer.firstname(), customer.lastname(), customer.number()));
      } };

  auto equal {
      []
          (const Customer &left, const Customer &right)
      {
          return left.number() == right.number();
      }
  };

  using Customized_set = unordered_set<Customer, decltype(hash), decltype(equal)>;
  Customized_set customer_set(10, hash, equal);

  customer_set.emplace("Nico", "Josuttis", 42);
  customer_set.emplace("Tom", "Hanks", 45);
  customer_set.emplace("Clark", "Kent", 18);

  PRINT_ELEMENTS(customer_set);
}
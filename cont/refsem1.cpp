//
// Created by martin on 11/5/22.
//

#include <bits/stdc++.h>

#include "../stl/print.hpp"

using namespace std;

class Item
{
 public:
  explicit Item (string name, double price) :
      m_name(std::move(name)),
      m_price(price)
  {

  }

  [[nodiscard]] string name () const
  {
    return m_name;
  }

  void set_name (const string &name)
  {
    m_name = name;
  }

  [[nodiscard]] double price () const
  {
    return m_price;
  }

  void set_price (double price)
  {
    m_price = price;
  }

 private:
  string m_name;

  double m_price;
};

template < typename Collection >
void print_items (const string &message, const Collection &collection)
{
  cout << message << endl;
  for (const auto &element : collection)
    {
      cout << ' ' << element->name() << ": " << element->price() << endl;
    }
}

int main ()
{
  using Item_ptr = shared_ptr<Item>;
  set<Item_ptr> all_items;
  deque<Item_ptr> bestsellers;

//  bestsellers = { Item_ptr(new Item("Kong Yize", 20.10)),
//                  Item_ptr(new Item("A Midsummer Night's Dream", 14.99)),
//                  Item_ptr(new Item("The Maltese Falcon", 9.88))
//  };
  bestsellers = { make_shared<Item>("Kong Yize", 20.10),
                  make_shared<Item>("A Midsummer Night's Dream", 14.99),
                  make_shared<Item>("The Maltese Falcon", 9.88)
  };
  all_items = { make_shared<Item>("Water", 0.44),
                make_shared<Item>("Pizza", 2.22)
  };
  all_items.insert(bestsellers.cbegin(), bestsellers.cend());

  print_items("bestsellers:", bestsellers);
  print_items("all-items:", all_items);
  cout << endl;

  for_each(bestsellers.begin(), bestsellers.end(),
           [] (shared_ptr<Item> &element)
           {
               element->set_price(element->price() * 2);
           });

  bestsellers[1] = *(find_if(all_items.begin(), all_items.end(),
                             [] (const shared_ptr<Item> &element)
                             {
                                 return element->name() == "Pizza";
                             }));

  bestsellers[0]->set_price(44.77);

  print_items("bestsellers:", bestsellers);
  print_items("all-items:", all_items);
}

//
// Created by martin on 10/30/22.
//

#include <bits/stdc++.h>

using namespace std;

struct Person : enable_shared_from_this<Person>
{
    explicit Person (string name, shared_ptr<Person> mother = nullptr, shared_ptr<Person> father = nullptr) :
        name(std::move(name)),
        mother(std::move(mother)),
        father(std::move(father))
    {

    }

    virtual ~Person ()
    {
      cout << "delete " << name << endl;
    }

    void set_parents_and_their_kids (const shared_ptr<Person>& m = nullptr,
                                     const shared_ptr<Person>& f = nullptr)
    {
      mother = m;
      father = f;
      if (m != nullptr)
        {
          m->kids.push_back(shared_from_this());
        }
      if (f != nullptr)
        {
          f->kids.push_back(shared_from_this());
        }
    }

    string name;

    shared_ptr<Person> mother;

    shared_ptr<Person> father;

    vector<weak_ptr<Person>> kids;
};

auto init_family (const string &name)
{
  auto mom { make_shared<Person>(name + "'s mom") };
  auto dad { make_shared<Person>(name + "'s dad") };
  auto kid { make_shared<Person>(name) };
  kid->set_parents_and_their_kids(mom, dad);

  return kid;
}

int main ()
{
  auto p { init_family("nico") };

  cout << "nico's family exists" << endl;
  cout << "- nico is shared " << p.use_count() << " times" << endl;
  cout << "- name of 1st kid of nico's mom: " << p->mother->kids[0].lock()->name << endl;

  cout << endl << "--------------" << endl << endl;

  p = init_family("jim");

  cout << endl << "--------------" << endl << endl;

  cout << "jim's family exists" << endl;
  cout << "- jim is shared " << p.use_count() << " times" << endl;
  cout << "- name of 1st kid of jim's mom: " << p->mother->kids[0].lock()->name << endl;

  cout << endl << "--------------" << endl << endl;
}
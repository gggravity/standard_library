//
// Created by martin on 10/30/22.
//

#pragma once

#include <bits/stdc++.h>

using namespace std;

class File_deleter
{
 public:
  explicit File_deleter (string fn) :
      filename { std::move(fn) }
  {

  }

  void operator() (ofstream *fp)
  {
    delete fp;
    remove(filename.c_str());
  }

 private:
  string filename;
};

int main ()
{

  shared_ptr<ofstream> fp(new ofstream("tmp_file.txt"), File_deleter("tmp_file.txt"));
  sleep(10);
}
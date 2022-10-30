#pragma once

#include <bits/stdc++.h>

template < typename T >
void process_code_exception (const T &e)
{
  using namespace std;
  auto c = e.code();
  cerr << left << setw(20) << "- category:"
       << right << setw(10) << c.category().name() << endl;
  cerr << left << setw(20) << "- value:"
       << right << setw(10) << c.value() << endl;
  cerr << left << setw(20) << "- message:"
       << right << setw(10) << c.message() << endl;
  cerr << left << setw(20) << "- default category:"
       << right << setw(10) << c.default_error_condition().category().name() << endl;
  cerr << left << setw(20) << "- default value:"
       << right << setw(10) << c.default_error_condition().value() << endl;
  cerr << left << setw(20) << "- default message:"
       << right << setw(10) << c.default_error_condition().message() << endl;
}

void process_exception ()
{
  using namespace std;
  try
    {
      throw;
    }
  catch (const ios_base::failure &e)
    {
      cerr << "I/O EXCEPTION: " << e.what() << endl;
      process_code_exception(e);
    }
  catch (const system_error &e)
    {
      cerr << "SYSTEM EXCEPTION: " << e.what() << endl;
      process_code_exception(e);
    }
  catch (const future_error &e)
    {
      cerr << "FUTURE EXCEPTION: " << e.what() << endl;
      process_code_exception(e);
    }
  catch (const bad_alloc &e)
    {
      cerr << "BAD ALLOC EXCEPTION: " << e.what() << endl;
    }
  catch (const exception &e)
    {
      cerr << "EXCEPTION: " << e.what() << endl;
    }
  catch (...)
    {
      cerr << "UNKNOWN EXCEPTION" << endl;
    }
}
#include <cassert>

import std; // operator==
import hello;

int
main ()
{
  using namespace hello;

  assert (format_hello ("World") == "Hello, World!");
}

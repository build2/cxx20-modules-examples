#include <cassert>
#include <string> // operator==

#include <libhello-format/format.hxx>

int
main ()
{
  using namespace hello;

  assert (format_hello ("World") == "Hello, World!");
}

module hello;

/*
module;

#include <string_view>

module hello;
*/

import :print;

namespace hello
{
  void
  //say_hello (const std::string_view& n)
  say_hello (const char* n)
  {
    print_hello (format_hello (n));
  }
}

module hello;

import :print;

namespace hello
{
  void
  say_hello (const std::string_view& n)
  {
    print_hello (format_hello (n));
  }
}

module hello;

import :print;

namespace hello
{
  void
  say_hello (std::string_view n, const properties&)
  {
    print_hello (format_hello (n));
  }
}

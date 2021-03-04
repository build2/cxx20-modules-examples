module hello;

import <iostream>;

namespace hello
{
  void
  say_hello (const std::string_view& n)
  {
    std::cout << "Hello, " << n << '!' << std::endl;
  }
}

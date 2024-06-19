module;

#include <iostream>

module hello;

namespace hello
{
  void
  say_hello (std::string_view n)
  {
    std::cout << "Hello, " << n << '!' << std::endl;
  }
}

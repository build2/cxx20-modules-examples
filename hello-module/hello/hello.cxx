//module hello;
//
//import <iostream>;

module;

#include <string_view>
#include <iostream>

module hello;

namespace hello
{
  void
  say_hello (const std::string_view& n)
  {
    std::cout << "Hello, " << n << '!' << std::endl;
  }
}

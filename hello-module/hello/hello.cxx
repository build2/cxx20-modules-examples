#if 0 // GCC bug 98741
module hello;

import <iostream>;
#else
module;

#include <string_view>
#include <iostream>

module hello;
#endif

namespace hello
{
  void
  say_hello (const std::string_view& n)
  {
    std::cout << "Hello, " << n << '!' << std::endl;
  }
}

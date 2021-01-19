import <iostream>;

import <hello/hello.hxx>;

namespace hello
{
  void
  say_hello (const std::string_view& n)
  {
    std::cout << "Hello, " << n << '!' << std::endl;
  }
}

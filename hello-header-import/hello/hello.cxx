import <iostream>;

import <hello/hello.hxx>;

namespace hello
{
  void
  say_hello (std::string_view n)
  {
    std::cout << "Hello, " << n << '!' << std::endl;
  }
}

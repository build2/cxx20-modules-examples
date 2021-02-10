#include <iostream> // Must come first (GCC bug 99000).

#include <hello/hello.hxx>

namespace hello
{
  void
  say_hello (const std::string_view& n)
  {
    std::cout << "Hello, " << n << '!' << std::endl;
  }
}

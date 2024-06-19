#include <iostream> // Must come first (GCC bug 99000).

#include <hello/hello.hxx>

namespace hello
{
  void
  say_hello (std::string_view n)
  {
    std::cout << "Hello, " << n << '!' << std::endl;
  }
}

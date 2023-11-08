module;

#include <ostream>
#include <stdexcept>

module hello;

namespace hello
{
  std::string
  format_hello (const std::string_view& n)
  {
    return "Hello, " + std::string (n) + "!";
  }

  void
  say_hello (std::ostream& o, const std::string_view& n)
  {
    if (n.empty ())
      throw std::invalid_argument ("empty name");

    o << format_hello (n) << std::endl;
  }
}

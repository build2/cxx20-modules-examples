module;

#include <ostream>
#include <stdexcept>
///#include <string_view>

module hello;

namespace hello
{
  void
  ///say_hello (std::ostream& o, const std::string_view& n)
  say_hello (std::ostream& o, const std::string& n)
  {
    ///if (!check_hello (n))
    if (!check_hello (n.c_str ()))
      throw std::invalid_argument ("invalid name");

    //// GCC bug 98760
    ////o << hello::format_hello (n) << std::endl;
    o << "Hello, " << n << "!" << std::endl;
  }
}

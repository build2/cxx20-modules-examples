module hello;

import <ostream>;
import <stdexcept>;

namespace hello
{
  void
  say_hello (std::ostream& o, const std::string_view& n)
  {
    if (!check_hello (n))
      throw std::invalid_argument ("empty name");

    // GCC bug 98760
    //o << hello::format_hello (n) << std::endl;
    o << "Hello, " << n << "!" << std::endl;
  }
}

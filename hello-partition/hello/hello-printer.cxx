// An example of an implementation unit that provides a definition of a name
// declared in a non-interface partition.

module hello;
import :print;

namespace hello
{
  void
  print_hello (std::string_view g)
  {
    std::cout << g << std::endl;
  }
}

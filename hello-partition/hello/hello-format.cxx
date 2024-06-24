// An example of an implementation unit that provides a definition of a name
// declared in an interface partition.

module hello;

namespace hello
{
  std::string
  format_hello (std::string_view n)
  {
    return "Hello, " + std::string (n) + '!';
  }
}

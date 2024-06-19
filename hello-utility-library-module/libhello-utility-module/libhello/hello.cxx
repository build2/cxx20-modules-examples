module hello;

namespace hello
{
  std::string
  format_hello (std::string_view n)
  {
    return "Hello, " + std::string (n) + "!";
  }

  void
  say_hello (std::ostream& o, std::string_view n)
  {
    if (n.empty ())
      throw std::invalid_argument ("empty name");

    o << format_hello (n) << std::endl;
  }
}

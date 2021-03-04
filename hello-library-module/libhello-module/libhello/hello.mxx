export module hello;

import <iosfwd>;
import <string_view>;

export import :check;
import hello.format;

export namespace hello
{
  void
  say_hello (std::ostream&, const std::string_view& name);

  using hello::format_hello; // Re-export.
}

#pragma once

#include <iosfwd>
#include <string_view>

#include <libhello/check.hxx>
#include <libhello-format/format.hxx> // Re-export hello::format_hello

namespace hello
{
  void
  say_hello (std::ostream&, const std::string_view& name);
}

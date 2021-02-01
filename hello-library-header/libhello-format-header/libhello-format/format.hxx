#pragma once

#include <string>
#include <string_view>

namespace hello
{
  inline std::string
  format_hello (const std::string_view& n)
  {
    return "Hello, " + std::string (n) + '!';
  }
}

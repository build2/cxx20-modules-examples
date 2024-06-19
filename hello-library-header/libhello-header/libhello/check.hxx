#pragma once

#include <string_view>

namespace hello
{
  inline bool
  check_hello (std::string_view name)
  {
    return !name.empty ();
  }
}

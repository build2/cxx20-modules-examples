#pragma once

#include <string_view>

namespace hello
{
  void
  say_hello (const std::string_view& name);
}

// Sanity check: make sure this header is built with correct options.
//
#ifndef HELLO_BUILD
#  error wrong build options
#endif

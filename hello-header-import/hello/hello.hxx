#pragma once

#if 0 // GCC bug 99380
import <string_view>;
#else
#include <string_view>
#endif

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

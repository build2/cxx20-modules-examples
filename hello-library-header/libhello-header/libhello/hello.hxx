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

// Sanity check: make sure this header is built with correct options.
//
#if !defined(LIBHELLO_STATIC)       && !defined(LIBHELLO_SHARED)  && \
    !defined(LIBHELLO_STATIC_BUILD) && !defined(LIBHELLO_SHARED_BUILD)
#  error wrong build options
#endif

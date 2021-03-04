export module hello:check;

import <string_view>;

export namespace hello
{
  // GCC bug 99377
  //inline
  bool
  check_hello (const std::string_view& name)
  {
    return !name.empty ();
  }
}

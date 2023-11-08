# C++20 Modules Examples

NOTE: this `named-only` branch contains a subset of examples found in the
`master` branch. It doesn't contain examples of header units and examples of
named modules have been modified to `#include` instead of `import` headers.

This repository contains a number of examples that demonstrate various C++20
modules features and their support in `build2`. For a discussion of the
demonstrated functionality see [Complete C++20 Modules Support with
GCC](https://build2.org/blog/build2-cxx20-modules-gcc.xhtml).

Note: requires GCC 12 (or later) or Clang 16 (or later).

[`hello-module`][hello-module]                                 -- module example

[`hello-partition`][hello-partition]                           -- module partition example

[`hello-library-module`][hello-library-module]                 -- module library example

[`hello-utility-library-module`][hello-utility-library-module] -- module utility library example

[`hello-simple`][hello-simple]                                 -- module example as `build2` simple project

[hello-module]:                 https://github.com/build2/cxx20-modules-examples/tree/master/hello-module
[hello-partition]:              https://github.com/build2/cxx20-modules-examples/tree/master/hello-partition
[hello-library-module]:         https://github.com/build2/cxx20-modules-examples/tree/master/hello-library-module
[hello-utility-library-module]: https://github.com/build2/cxx20-modules-examples/tree/master/hello-utility-library-module
[hello-simple]:                 https://github.com/build2/cxx20-modules-examples/tree/master/hello-simple

While you can build each example individually (see `README` in each example
for details), you can also build them all (except for `hello-simple`) at once
in a shared build configuration, for example:

```
git clone https://github.com/build2/cxx20-modules-examples.git
cd cxx20-modules-examples

bdep init -C @clang cc config.cxx=clang++
bdep update @clang
```

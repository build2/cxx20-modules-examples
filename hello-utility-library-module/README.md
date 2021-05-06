# C++20 Module Utility Library Example

C++20 module library example that uses a utility library for unit testing.

Example of a development build (in this case module BMIs are built as part of
each library):

```
b create: config-gcc/, cc config.cxx=g++
cd config-gcc/

b configure: ../libhello-utility-module/@libhello-utility-module/
b configure: ../hello-utility-library-module/@hello-utility-library-module/

b hello-utility-library-module/
```

Example of an installed build (in this case module BMIs are built on the side
as part of the executable):

```
b                                       config.install.root=/tmp/install install: libhello-utility-module/
b config.cc.loptions=-L/tmp/install/lib hello-utility-library-module/
```

# C++20 Module Library Example

C++20 module library example. Note that `libhello-format-module` is an
interface-only (or *binless*, in `build2` terminology) library.

Example of a development build (in this case module BMIs are built as part of
each library):

```
b create: config-gcc/, cc config.cxx=g++
cd config-gcc/

b configure: ../libhello-format-module/@libhello-format-module/
b configure: ../libhello-module/@libhello-module/
b configure: ../hello-library-module/@hello-library-module/

b hello-library-module/
```

Example of an installed build (in this case module BMIs are built on the side
as part of the executable):

```
b                                       config.install.root=/tmp/install install: libhello-format-module/
b config.cc.loptions=-L/tmp/install/lib config.install.root=/tmp/install install: libhello-module/
b config.cc.loptions=-L/tmp/install/lib hello-library-module/
```

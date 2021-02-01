# C++20 Header Importation/Translation Library Example

C++20 header importation/translation library example. Note that
`libhello-format-header` is a header-only (or *binless*, in `build2`
terminology) library.

Example of a development build:

```
b config.import.libhello_format_header=libhello-format-header/ \
  config.import.libhello_header=libhello-header/ \
  libhello-format-header/ libhello-header/ hello-library-header-import/

b config.import.libhello_format_header=libhello-format-header/ \
  config.import.libhello_header=libhello-header/ \
  config.cxx.translate_include=all-importable \
  libhello-format-header/ libhello-header/ hello-library-header-translate/
```

Example of an installed build:

```
b                                       config.install.root=/tmp/install install: libhello-format-header/
b config.cc.loptions=-L/tmp/install/lib config.install.root=/tmp/install install: libhello-header/
b config.cc.loptions=-L/tmp/install/lib hello-library-header-import/
b config.cc.loptions=-L/tmp/install/lib config.cxx.translate_include=all-importable hello-library-header-translate/
```

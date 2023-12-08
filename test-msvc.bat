@echo off

@rem Run various build tests (in source, install, etc) by essentially
@rem executing the commands shown in README.md files with MSVC.

@rem usage: .\test-msvc.bat

set "b=b config.cxx=cl"
set "tmp=c:\tmp"

set "PATH=%tmp%\install\bin;%PATH%"

set "owd=%CD%"

@echo on

@rem
@rem
cd hello-simple
%b%
@if errorlevel 1 goto error
.\hello.exe
%b% clean
cd %owd%

@rem
@rem
cd hello-module
%b%
@if errorlevel 1 goto error
%b% test
@if errorlevel 1 goto error
%b% clean
cd %owd%

@rem
@rem
cd hello-partition
%b%
@if errorlevel 1 goto error
%b% test
@if errorlevel 1 goto error
%b% clean
cd %owd%

@rem
@rem
cd hello-library-module

%b% create: config\, cc
cd config
b configure: ..\libhello-format-module\@libhello-format-module\
b configure: ..\libhello-module\@libhello-module\
b configure: ..\hello-library-module\@hello-library-module\
b hello-library-module\
@if errorlevel 1 goto error
b test: hello-library-module\
@if errorlevel 1 goto error
cd ..
rmdir /S /Q config

rmdir /S /Q %tmp%\install
%b%                                               config.install.root=%tmp%\install install: libhello-format-module\
%b% config.cc.loptions=/LIBPATH:%tmp%\install\lib config.install.root=%tmp%\install install: libhello-module\
%b% config.cc.loptions=/LIBPATH:%tmp%\install\lib hello-library-module\
@if errorlevel 1 goto error
%b% config.cc.loptions=/LIBPATH:%tmp%\install\lib test: hello-library-module\
@if errorlevel 1 goto error
%b% config.cc.loptions=/LIBPATH:%tmp%\install\lib clean: hello-library-module\
%b% config.cc.loptions=/LIBPATH:%tmp%\install\lib clean: libhello-module\
%b%                                               clean: libhello-format-module\
rmdir /S /Q %tmp%\install

cd %owd%

@rem
@rem
cd hello-utility-library-module

%b% create: config\, cc
cd config
b configure: ..\libhello-utility-module\@libhello-utility-module\
b configure: ..\hello-utility-library-module\@hello-utility-library-module\
b hello-utility-library-module\
@if errorlevel 1 goto error
b test: hello-utility-library-module\
@if errorlevel 1 goto error
cd ..
rmdir /S /Q config

rmdir /S /Q %tmp%\install
%b%                                              config.install.root=%tmp%\install install: libhello-utility-module\
%b% config.cc.loptions=/LIBPATH:%tmp%\install\lib                                           hello-utility-library-module\
@if errorlevel 1 goto error
%b% config.cc.loptions=/LIBPATH:%tmp%\install\lib                                  test:    hello-utility-library-module\
@if errorlevel 1 goto error
%b% config.cc.loptions=/LIBPATH:%tmp%\install\lib                                  clean:   hello-utility-library-module\
%b%                                                                                clean:   libhello-utility-module\
rmdir /S /Q %tmp%\install

cd %owd%

@rem
@rem
@goto end

:error
@echo off
cd %owd%
exit /b 1

:end

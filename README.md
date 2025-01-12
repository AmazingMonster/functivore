# Functivore

A C++ template library for inspecting characteristics of a function signature.

## Prologue

Functivore is an abridged version of `boost::callable_traits`.
The library keeps the ability to inspect and simplify a function signature while removing the facilities for editing its qualifiers.
The library is implemented based on the same idea as `boost::callable_traits` but is cleaner overall as many metafunctions from `boost::callable_traits` have been removed.
The templates in this library are compatible with the metafunctions in [Conceptrodon](https://github.com/AmazingMonster/conceptrodon).

## [Documentation](./DOCS.md)

## Install

Functivore is a header-only library. After downloading the code, move the directory *./Functivore* to your project, then use it like your own headers.

You can also install Functivore using CMake:

### Windows

1. Download the library.

2. Open Developer Command Prompt that comes with Visual Studio. Redirect to the library folder. Generate a project buildsystem using CMake:

    ```Shell
    cmake -S . -B "Where to build"
    ```

3. Redirect to the build directory you specified after `-B` earlier. Run command:

    ```Shell
    cmake --install . --prefix "Where to install"
    ```

After installation, add the install directory you specified after `--prefix` to variable `CMAKE_PREFIX_PATH` in your project's *CMakeCache.txt*. If the variable doesn't exist, you will need to add the following line to your *CMakeCache.txt*:

```CMake
CMAKE_PREFIX_PATH:PATH=Install directory of the library
```

If `CMAKE_PREFIX_PATH` already exists,
append the install directory to the values of the variable(note the added semicolon):

```CMake
CMAKE_PREFIX_PATH:PATH=...; Install directory of the library
```

In the *CMakeList.txt* of your project, Add:

```CMake
find_package(Functivore REQUIRED CONFIG)
target_link_libraries(YourProject PRIVATE Functivore::Facilities)
```

You are good to go.

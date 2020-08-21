This is a simple C++ header file to allow outputting of C++ ranges.  It
started as ‘output\_container’ and now supports ranges as well, including C
arrays.  It avoids conflicts with existing output functions (like that for
`std::string`) by detecting whether they can be used.

Using this file requires a C++17-compliant compiler.

# Custom printf Function Project

## Description
This project involves creating a custom implementation of the `printf` function in C. This implementation, `_printf`, is designed to handle formatted output in a way similar to the standard library's `printf` function, supporting a range of format specifiers and leveraging variadic functions.

## Requirements
- **Environment**: Ubuntu 20.04 LTS
- **Compiler**: GCC with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Editor**: Any of `vi`, `vim`, or `emacs`
- **Coding Style**: [Betty](https://github.com/holbertonschool/Betty) (betty-style.pl and betty-doc.pl)

## Project Rules
- No use of global variables.
- A maximum of 5 functions per file.
- All files must end with a new line.
- Header file (`main.h`) should contain all function prototypes and be include-guarded.
- No `main` function in any submitted file.
- GitHub: Only one repository per group should exist to avoid scoring issues.

## Authorized Functions and Macros
- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start`, `va_end`, `va_copy`, `va_arg` (man 3 va_start)

## Compilation
To compile the code:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

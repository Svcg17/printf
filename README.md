# _printf
### Overview
_printf is a collection of C files that when compiled and executed,
produces output according to a format.
### Prototype of _printf function
`int _printf(const char *format, ...);`
Returns: the number of characters printed (excluding the null byte used to end output to strings)
### Usage
- Include `holberton.h`
- Call _printf, passing a formatted string with any format specifiers and
  optional arguments
- Upon success, it writes desired output to stdout and returns 0
- Upon error, it returns -1
- If NULL is passed in as a string argument, it prints `(null)`

### Format Specifiers
Format Specifier | Description | Function name
-- | -- | --
`%c` | Prints a character | `_printchar`
`%s` | Prints a string | `_printstring`
`%%` | Prints a percent | `_printf`
`%i` & `%d` | Prints a number | `_printint`
`%R`| Prints a rot13'ed string | `_rot13`
### Example Usage
- `_printf("%c", 'd')` *prints the character `d`*
- `_printf("%s", "Hello, world\n")` *prints "Hello, world", followed by a new	line*
- `_printf("%%")` *prints the character `%`*
- `_printf("%i", 415)` *prints 415 (signed decimal notation)*
- `_printf("%d", 808)` *prints 808 (signed decimal notation)*
- `_printf("%R", "Hello\n")` *prints "Uryyb", followed by a new line*
### Files
File Name | Description
-- | --
`_printf.c` | produces output according to a format
`helper_funcs.c` | File containing functions for specifiers
`_putchar.c` | File containing function that writes a char to stdout
`_more_funcs.c`  | File containing functions for more specifiers
`holberton.h` | Header file with function prototypes and struct for specifiers

### About
Created on `Ubuntu 14.04 LTS`. Compiled with `gcc 4.8.4`, using flags: `-Wall -Werror -Wextra and -pedantic`
### Authors
[David Kwan](https://github.com/dwkwan) - [@dwkwan](https://twitter.com/davidwkwan) and [Sofia Cheung](https://github.com/svcg17) - [@sofivism](https://twitter.com/sofivism) at Holberton School (http://holbertonschool.com).
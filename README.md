# 0x11. C - printf

### 0. Handle %c, %s, and %
Write a function that produces output according to a format.
* Prototype: int \_printf(const char \*format, ...);
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* Write output to stdout, the standard output stream
* format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
    * c
    * s
    * %
* You don't have to reproduce the buffer handling of the C library printf function
* YOu don't have to handle the flag characters
* You don't have to handle the field width
* You don't have to handle precision
* You don't have go handle the length modifiers

### 1. Handle %d and %i
Handle the following conversion specifiers:
* d
* i
* You don't have to handle the flag characters
* You don't have to handle field width
* You don't have to handle precision
* You don't have to handle the length modifiers

### 2. Handle %b - A custom conversion specifier
Handle the following conversion specifiers:
* b: the unsigned int argument is converted to binary

### 3. Handle %u, %o, %x, and %X
Handle the following conversion specifiers:
* u
* o
* x
* X
* You don't have to handle the flag characters
* You don't have to handle field width
* You don't have to handle precision
* You don't have to handle the lenghth modifiers

### 4. Local buffer - 1024 bytes
Use a local buffer of 1024 bytes in order to call write as little as possible

## 5. Handle %S - A custom conversion specifier
* S: prints the string.
* Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by athe ASCII code value in hexadecimal (upper case - always 2 characters)

### 6. Handle %p
Handle the following conversion specifier: p.
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

### 7. Handle + and \#
Handle the following flag characters for non-custom conversion specifiers:
* \+
* space
* \#

### Handle %r - A custom conversion specifier
Handle the following custom conversion specifier
* r: prints a reversed string

### 14. Handle %R - A custom conversion specifier
Handle the following custom conversion specifier:
* R: prints the rot13'ed string

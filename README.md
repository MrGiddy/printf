# 0x11. C - printf

### [0-I'm not going anywhere. You can print wherever you want to. I'm here and I'm a Spur for life]()
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

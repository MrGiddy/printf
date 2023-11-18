#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>
#define BUFFSIZE 1024

int _printf(const char *format, ...);
int _putchar(int ch);
int _strlen(char *);
int string_handler(char *str);
int int_handler(int number);
int int_to_binary(unsigned int number);
int unsigned_int(unsigned int number, unsigned int base);
int int_to_hex(unsigned int number, unsigned int hex_case);
int handle_S(char *str);

#endif /* MAIN_H */

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>

int _printf(const char *format, ...);
void _putchar(int ch);
int _strlen(char *);
void string_handler(char *str);
int int_handler(int number, int count_char);

#endif /* MAIN_H */

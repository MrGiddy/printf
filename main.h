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

#endif /* MAIN_H */

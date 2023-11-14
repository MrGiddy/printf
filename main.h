#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int _printf(const char *format, ...);
void _putchar(int ch);
int _strlen(char *);
void string_handler(char *str);

#endif /* MAIN_H */

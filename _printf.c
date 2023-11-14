#include "main.h"

/**
 * _printf - A function that produces output according to a format
 * @format: A format string
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args_list;
	int count_char;
	char *str;

	if (format == NULL)
		return (-1);

	va_start(args_list, format);
	count_char = 0;
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count_char += 1;
		}
		else
		{
			format++;
			switch (*format)
			{
				case '%':
					write(1, format, 1);
					count_char += 1;
					break;
				case 'c':
					_putchar(va_arg(args_list, int));
					count_char += 1;
					break;
				case 's':
					str = va_arg(args_list, char *);
					string_handler(str);
					(str != NULL) ? count_char++ : count_char;
					break;
			}
		}
		format++;
	}
	va_end(args_list);
	return (count_char);
}

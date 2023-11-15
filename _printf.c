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

	if (format == NULL)
		return (-1);

	if (format[0] == '%' && format[1] == '\0')
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
					count_char += string_handler(va_arg(args_list, char *));
					break;
				case 'd':
					count_char += int_handler(va_arg(args_list, int));
					break;
				case 'i':
					count_char += int_handler(va_arg(args_list, int));
					break;
				default:
					count_char += _putchar('%');
					count_char += _putchar(*format);
					break;
			}
		}
		format++;
	}
	va_end(args_list);
	return (count_char);
}

#include "main.h"

/**
 * handle_S - Prints a string per custom comversion specifier, S
 * @str: A string
 * Return: The number of characters printed
 */
int handle_S(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			count += _putchar(92);
			count += _putchar('x');
			if (*str < 16)
			{
				count += _putchar('0');
			}
			count += int_to_hex(*str, 1);
		}
		else
		{
			count += _putchar(*str);
		}
		str++;
	}

	return (count);
}

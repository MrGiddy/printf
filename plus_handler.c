#include "main.h"

/**
 * plus_handler - Handles + symbol in format string
 * @format: The _printf format string
 * @number: An integer number
 * Return: The number of characters printed
 */
int plus_handler(const char *format, int number)
{
	int count, i;
	char specifiers[] = "di";

	count = 0;
	i = 0;

	format++; /* point to next char after + */
	/* Traverse specifiers */
	while (specifiers[i] != '\0')
	{
		/* If next char after + matches char in specifiers */
		if(*format == specifiers[i])
		{
			if (number >= 0)
			{
				count += _putchar('+'); /* Print a + */
			}

			/* if specifier is a 'd' or an 'i' */
			if (specifiers[i] == 'd' || specifiers[i] == 'i')
			{
				count += int_handler(number); /* Call int_handler func to print the integer */
				return (count);
			}
		}
		i++;
	}

	return (count);
}

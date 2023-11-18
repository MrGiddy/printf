#include "main.h"

/**
 * unsigned_int - Prints an unsigned integer
 * @number: An unsigned integer
 * @base: The base of number
 * Return: The number of characters printed
 */
int unsigned_int(unsigned int number, unsigned int base)
{
	char buffer[BUFFSIZE];
	int index, remainder, i, count;

	count = 0;
	if (number == 0)
	{
		count += _putchar('0');
		return (count);
	}

	index = 0;
	while (number > 0)
	{
		/* Obtain last digit */
		remainder = number % base;

		/* Store last digit as char in buffer */

		buffer[index++] = remainder + '0';

		/* Chop off last digit */
		number = number / base;
	}
	buffer[index] = '\0';

	/* Print buffer in reverse */
	for (i = index - 1; i >= 0; i--)
	{
		count += _putchar(buffer[i]);
	}

	return (count);
}

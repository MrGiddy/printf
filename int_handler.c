#include "main.h"

/**
 * int_handler - prints an integer
 * @number: The integer to print
 * Return: Nothing
 */
int int_handler(int number)
{
	int i, j, count, quotient, remainder;
	int int_buffer[100];

	count = 0;
	if (number == 0)
	{
		_putchar('0');
		count++;
		return (0);
	}

	if (number < 0)
	{
		_putchar('-');
		count++;
		number = -number;
	}

	i = 0;
	quotient = number;
	while (quotient > 0)
	{
		/* Obtain last digit */
		remainder = quotient % 10;
		/* Store last digit in buffer, increment buffer index */
		int_buffer[i++] = remainder;
		/* Chop off last digit */
		quotient = quotient / 10;
	}

	/* Iterate buffer in reverse */
	for (j = i - 1; j >= 0; j--)
	{
		/* Print the character at index j */
		_putchar(int_buffer[j] + 48);
		count++;
	}

	return (count);
}

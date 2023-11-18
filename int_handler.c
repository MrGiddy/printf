#include "main.h"

/**
 * int_handler - prints an integer
 * @number: The integer to print
 * Return: Nothing
 */
int int_handler(int number)
{
	int i, j, count, quotient, remainder;
	char buffer[BUFFSIZE];

	count = 0;
	if (number == 0)
	{
		count += _putchar('0');
		return (count);
	}

	if (number < 0)
	{
		count += _putchar('-');
		/* Handle the case of INT_MIN */
		if (number == INT_MIN)
		{
			count += _putchar('2');
			number = 147483648;
		}
		else
		{
			number = -number;
		}
	}

	i = 0;
	quotient = number;
	while (quotient > 0)
	{
		/* Obtain last digit */
		remainder = quotient % 10;
		/* Store last digit as character in buffer, increment buffer index */
		buffer[i++] = remainder + '0';
		/* Chop off last digit */
		quotient = quotient / 10;
	}

	/* Iterate buffer in reverse */
	for (j = i - 1; j >= 0; j--)
	{
		/* Print the character at index j */
		_putchar(buffer[j]);
		count++;
	}

	return (count);
}

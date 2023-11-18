#include "main.h"

/**
 * int_to_binary - Prints an integer in binary notation
 * @number: An unsigned integer
 * Return: The number of bytes printed
 */
int int_to_binary(unsigned int number)
{
	char buffer[BUFFSIZE];
	int index, rem, i, count;

	count = 0;
	if (number == 0)
	{
		count += _putchar('0');
		return (count);
	}

	index = 0;

	while (number > 0)
	{
		rem = number % 2;

		buffer[index++] = rem + '0';

		number = number / 2;
	}
	buffer[index] = '\0';

	/* Print buffer in reverse */
	for (i = index - 1; i >= 0; i--)
	{
		count += _putchar(buffer[i]);
	}

	return (count);
}

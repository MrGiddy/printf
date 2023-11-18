#include "main.h"

/**
 * integer_to_binary - Prints an integer in binary representation
 * @num: An integer number
 * Return: A pointer to a binary string
 */
int int_to_binary(unsigned int number)
{
	char buffer[BUFFSIZE];
	int index, rem, i, count;

	index = 0;

	while (number > 0)
	{
		rem = number % 2;

		buffer[index++] = rem + '0';

		number = number / 2;
	}
	buffer[index] = '\0';

	count = 0;
	/* Print buffer in reverse */
	for (i = index - 1; i >= 0; i--)
	{
		count += _putchar(buffer[i]);
	}

	return (count);
}

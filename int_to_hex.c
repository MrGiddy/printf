#include "main.h"

/**
 * int_to_hex - Prints an integer in hexadecimal notation
 * @number: An ineger
 * @hex_case: Upper or Lowercase specification
 * Return: The number of bytes printed
 */
int int_to_hex(unsigned int number, unsigned int hex_case)
{
	char buffer[BUFFSIZE];
	int i, rem, index, count;
	char *upper_hex = "0123456789ABCDEF";
	char *lower_hex = "0123456789abcdef";

	index = 0;
	while (number > 0)
	{
		rem = number % 16;
		if (hex_case == 1) /* state 1: uppercase hexadecimal */
		{
			buffer[index++] = upper_hex[rem];
		}
		else if (hex_case == 0) /*state 0: lowercase hexadecimal */
		{
			buffer[index++] = lower_hex[rem];
		}
		number = number / 16;
	}
	buffer[index] = '\0';

	count = 0;
	for (i = index - 1; i >= 0; i--)
	{
		count += _putchar(buffer[i]);
	}

	return (count);
}

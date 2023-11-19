#include "main.h"

/**
 * print_reversed_string - Prints a reversed string
 * @input_string: The string to reverse
 * Return: The number of characters printed
 */
int print_reversed_string(char *input_string)
{
	int len, count, i;
	char ch;
	char *dest = NULL;

	len = _strlen(input_string);

	dest = (char *)malloc(sizeof(char) * len + 1);

	count = 0;
	if (dest == NULL)
	{
		return (count);
	}

	/* This copy ensures string literals passed can be further processed */
	_strcpy(dest, input_string);

	/* Iterate to the middle of input_string */
	for (i = 0; i < (len / 2); i++)
	{
		/* Store current character of input_string to a temp var ch */
		ch = dest[i];
		/* Replace current char with last char (not '\0') */
		dest[i] = dest[len - i - 1];
		/* Replace last char with themp var ch */
		dest[len - i - 1] = ch;
	}
	dest[len] = '\0'; /* Null terminate the reversed string */

	/* Print the reversed string */
	count += string_handler(dest);

	return (count);
}

#include "main.h"

/**
 * string_handler - Prints a string
 * @str: A string
 * Return: Nothing
 */
int string_handler(char *str)
{
	int count;

	char *nil = "(null)";

	count = 0;
	if (str == NULL)
	{
		count += write(1, nil, _strlen(nil));
	}
	else
	{
		count += write(1, str, _strlen(str));
	}

	return (count);
}

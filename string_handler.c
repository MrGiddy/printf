#include "main.h"

/**
 * string_handler - Prints a string
 * @str: A string
 * Return: Nothing
 */
void string_handler(char *str)
{
	char *nil = "(nil)";

	if (str == NULL)
	{
		write(1, nil, _strlen(nil));
	}
	else
	{
		write(1, str, _strlen(str));
	}
}

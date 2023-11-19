#include "main.h"

/**
 * print_rot13dstr - Prints a string encoded using rot13
 * @input_string: The string to encode and print
 * Return: The number of characters printed.
 */
int print_rot13dstr(char *input_string)
{
	int i, j, count;

	char search_string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotate_string[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *dest = NULL;

	dest = (char *)malloc(sizeof(char) * _strlen(input_string) + 1);

	/* Copy input_string to dest */
	_strcpy(dest, input_string);
	/* Encode/Rotate input_string */
	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; search_string[j] != '\0'; j++)
		{
			if (dest[i] == search_string[j])
			{
				dest[i] = rotate_string[j];
				break;
			}
		}
	}
	dest[i] = '\0'; /* Just to make sure - Defensive programming */

	count = 0;
	/* Print the rotated string */
	count += string_handler(dest);

	return (count);
}

#include "main.h"

/**
 * _strcpy - Function that copies a string to a buffer
 * @dest: The destination string
 * @src: The source/input string
 * Return: A pointer to the buffer/copied string
 */
char *_strcpy(char *dest, char *src)
{
	int len_src;

	for (len_src = 0; src[len_src] != '\0'; len_src++)
	{
		dest[len_src] = src[len_src];
	}
	dest[len_src] = '\0';

	return (dest);
}

#include "main.h"

/**
 * _putchar - prints a character
 * @ch: A character
 * Return: Nothing
 */
int _putchar(int ch)
{
	write(1, &ch, 1);

	return (1); /* 1 is the number of characters printed */
}

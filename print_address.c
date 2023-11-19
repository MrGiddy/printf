#include "main.h"

/**
 * print_address - Prints a memory address
 * @ptr: A pointer to an address
 * Return: The number of bytes printed
 */
int print_address(void *ptr)
{
	int count, index, rem, i;
	uintptr_t addr;
	char buffer[BUFFSIZE];
	char *lower_hex = "0123456789abcdef";
	char *null = "(nil)";

	count = 0;
	if (ptr == NULL)
	{
		count += string_handler(null);
		return (count);
	}

	/* Typecast ptr to integer type */
	addr = (uintptr_t)ptr;

	/* Prepend 0x to output */
	count += _putchar('0');
	count += _putchar('x');

	/* int_to_hex expects unsigned int */
	/* Thus the typecast of addr from uintptr_t to unsigned int */
	if (addr == 0)
	{
		count += _putchar('0');
		return (count);
	}

	index = 0;
	while (addr > 0)
	{
		rem = addr % 16;
		buffer[index++] = lower_hex[rem];
		addr = addr / 16;
	}
	buffer[index] = '\0';

	for (i = index - 1; i >= 0; i--)
	{
		count += _putchar(buffer[i]);
	}

	return (count);
}

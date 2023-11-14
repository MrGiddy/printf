/**
 * _strlen - computes the length of a string
 * @str: A string
 * Return: The length of str
 */
int _strlen(char *str)
{
	int str_len;

	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;

	return (str_len);
}

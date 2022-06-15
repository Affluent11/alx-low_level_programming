#includXe <string.h>
size_t strlen(const char *s);

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 * Return: Length.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;


	while (*str++)
		len++;

	return (len);
}

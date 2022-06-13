#include <string.h>
char *strcpy(char *dest, const char *src);

/**
 * _strcpy - Copies a string pointed
 * A pointer to an char that will be updated
 * A source string to copy.
 * Return: A pointer to the dest. string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];

	}
	dest[index] = '\0';

	return (dest);
	}

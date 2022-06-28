#include <string.h>


/**
 * *_strcpy - Copies a string pointed
 * @dest: A pointer to an char that will be updated
 * @src: A source string to copy.
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

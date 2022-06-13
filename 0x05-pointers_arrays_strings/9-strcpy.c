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
	int x;
	
	x = 0;


	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;

	}
	dest[x] = '\0';

	return (dest);
}

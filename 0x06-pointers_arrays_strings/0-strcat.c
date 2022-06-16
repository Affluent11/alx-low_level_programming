#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src
 * null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the dest. string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0') /*WHILE count character */
	{
		i++;
	}
}

	j = 0;
	while (src[j] != '\0') /*WHILE concatenate dest with src*/
{
	dest[i] = src[j];
	j++;  /*sum j*/
	i++; /**sum i*/
}
dest[i] = '\0'; /*the terminating null byte*/

return (dest);


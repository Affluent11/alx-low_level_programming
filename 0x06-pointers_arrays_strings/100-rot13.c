#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int count = 0, a;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	{
		a = 0;
		while (letters[a] != '\0')
		{
			if (str[count] == letters[a])
			{
				str[count] = rot13[a];
				break;
			}
			a++;
		}


	}
	count++;
	}

#include "main.h"

/**
* _isalpha - checks for alphabet
* @c: is an integer
*
* Description: this checks if a character is
* an alphabet and returns a value
*
* Return: returns 1 if lowercase and 0 if otherwise
*/
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
		return (0);
}

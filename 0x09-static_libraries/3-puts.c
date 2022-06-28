#include "main.h"
int puts(const char *s);

/**
 * _puts - Prints a string.
 * @str: string.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');


}

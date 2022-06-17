<<<<<<< HEAD
#include "main.h"

/**
print_number - Prints an integer.
@n: The integer to be printed.
*/
void print_number(int n)
{
  unsigned int num = n;
  
  if (n < 0)
    {
      _putchar('-');
      num = -num;

    }

  if ((num / 10) > 0)
    print_number(num / 10);

  _putchar((num % 10) + '0');

}
=======
#include "main.h"

/**
 * print_number - printing number with puts
 *
 * @n: input int
 */
void print_number(int n)
{
	/*Declaring variables*/
	int count = 0, p = 1;
	unsigned int num = n;


	if (n < 0) /*Evaluate this condition*/
	{
		_putchar('-');
		num = -n;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	while (count > 1)
	{
		p *= 10;
		count--;
	}
	while (p >= 1)
	{
		_putchar(num / p % 10 + '0');
		p /= 10;
	}
}
>>>>>>> 1907838c3b47503b5eca68b6108b99bf5222e107

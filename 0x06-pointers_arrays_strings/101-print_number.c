#include "main.h"

/**
 * print_number - function to print a number.
 * @n: Integer parameter
 */

void print_number(int n)
{
	if (n > 0)
	{
		if (n / 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	} else if (n == 0)
	{
		_putchar('0');
	} else
	{
		_putchar('-');
		n = -n;
		if (n / 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}

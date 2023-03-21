#include "main.h"

/**
 * print_last_digit - print the last digit of a number.
 * @c: The number to be computed
 * Return:  value of the last digit
 */

int print_last_digit(int c)
{
	int last;

	last = c % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

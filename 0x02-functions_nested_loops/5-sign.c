#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to be checked
 * Return: 1 for + number 0 for n=0 -1 for - number
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}

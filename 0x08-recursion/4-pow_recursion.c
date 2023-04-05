#include "main.h"

/**
 * _pow_recursion - function that returns x raised to the power of y
 * @x: the value to be inputed
 * @y: the power to be raised
 * Return: -1 if y is < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

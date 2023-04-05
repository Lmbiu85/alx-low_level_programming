#include "main.h"

/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n:number to be checked if it has a natural square root.
 * Return: -1 if n dos not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		int i = 1;

		while (i * i <= n)
		{
			if (i * i == n)
			{
				return (i);
			}
			i++;
		}
		return (-1);
	}
}

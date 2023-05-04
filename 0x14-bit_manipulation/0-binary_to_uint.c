#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int sum  = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		sum = 2 * sum + (b[a] - '0');
	}

	return (sum);
}

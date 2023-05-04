#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: number of bit
 * @m: the other number
 * Return: number of bits you would need to flip to get from one number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int exclusive = n ^ m;

	int i;

	for (i = 0; i < 64; i++)
	{
		count += (exclusive >> i) & 1;
	}

	return (count);
}

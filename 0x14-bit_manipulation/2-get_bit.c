#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index, starting from 0 of the bit you want to get
 * @n: the bit to be displayed
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	return ((n >> index) & 1);
}

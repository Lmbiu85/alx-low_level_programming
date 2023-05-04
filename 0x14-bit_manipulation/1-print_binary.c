#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	int bit;

	if (n >> 1)
		print_binary(n >> 1);

	bit = n & 1;
	putchar(bit + '0');
}

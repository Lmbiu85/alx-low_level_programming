#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one
 * @n2: number two
 * @r: result
 * @size_r: size of the result
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, sum = 0, i = 0, j = 0, k = 0;

	while (n1[i] || n2[j] || carry)
	{
		sum = carry + (n1[i] ? n1[i] - 48 : 0) + (n2[j] ? n2[j] - 48 : 0);
		r[k++] = (sum % 10) + 48;
		if (k >= size_r)
			return (0);
		carry = sum / 10;
		i = (n1[i]) ? i + 1 : i;
		j = (n2[j]) ? j + 1 : j;
	}
	r[k] = 0;

	return (r);
}

#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: Array container
 * @n: Number of elements of the array
 *
 * Return: No Return
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

#include "main.h"

/**
 * swap_int - swap between two intergers int a and int b
 * @a: the first int
 * @b: second int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}

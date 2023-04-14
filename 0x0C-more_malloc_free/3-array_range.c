#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of intergers
 * @max: the maximum number of intergers
 * @min: the minimum number of intergers
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arry;
	int a;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	arry = malloc(sizeof(int) * size);
	if (arry == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		arry[a] = min++;
	return (arry);
}

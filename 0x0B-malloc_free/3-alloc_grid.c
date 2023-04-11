#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns pointer to a 2 dimensional array
 * @width: the width of the input
 * @height: the height of the input
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **f;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);

	f = malloc(sizeof(int *) * height);

	if (f == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		f[a] = malloc(sizeof(int) * width);
		if (f[a] == NULL)
		{
			for (; a >= 0; a--)
				free(f[a]);
			free(f);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			f[a][b] = 0;
	}
	return (f);
}

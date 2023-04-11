#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free thr allocated space assigned by malloc
 * @grid: 2 dimenstional grid
 * @height: the height of the grid
 * Description: the program frees the memory of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}

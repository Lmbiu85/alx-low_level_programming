#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%.8x:", i);
		for (j = 0; j < 10; j++)
		{
			if ((j % 2) != 0 && (i + j) != size)
				printf(" %.2x", (unsigned char)*(b + (i + j)));
			else if ((i + j) < size)
				printf(" %.2x", (unsigned char)*(b + (i + j)));
			else
				printf("   ");
		}
		for (j = 0; j < 10; j++)
			if ((i + j) < size && (*(b + (i + j)) > 31 && *(b + (i + j)) < 126))
				printf("%c", *(b + (i + j)));
			else
				printf(".");
		printf("\n");
	}
	if (size == 0)
		printf("\n");
}

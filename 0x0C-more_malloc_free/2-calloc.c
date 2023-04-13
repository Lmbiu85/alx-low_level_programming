#include "main.h"
#include <stdlib.h>

/**
 * *_memset - memory file with constant byte
 * @y: area of the memory to be filled
 * @a: the character to be copied
 * @x: amount of times a is to be copied
 * Return: pointer to the memory are of y
 */
char *_memset(char *y, char a, unsigned int x)
{
	unsigned int j;

	for (j = 0; j < x; j++)
	{
		y[j] = a;
	}
	return (y);
}
/**
 * *_calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: NULL if nmemb is 0 of if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(size * nmemb);
	if (str == NULL)
		return (NULL);
	_memset(str, 0, nmemb * size);
	return (str);
}

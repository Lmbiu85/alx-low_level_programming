#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char and unsigned int size
 * @size: the size of the array
 * @c: the char to be used
 * Description: creat an array of size size and assign char c
 * Return: NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *str;

	str = malloc(sizeof(char) * size);

	if (str == NULL || size == 0)
		return (NULL);
	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}

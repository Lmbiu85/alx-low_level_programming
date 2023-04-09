#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: String to be appended.
 * @src: String to append.
 * @n: Number of bytes from src string to append.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (*(dest + i))
	{
		i++;
	}

	j = 0;
	while (*(src + j) && j < n)
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

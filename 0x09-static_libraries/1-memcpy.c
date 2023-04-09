#include "main.h"
/**
 * _memcpy - function that copies a byte from a memory area.
 * @n: the bytes to be copied.
 * @src: the source from where the byte is copied.
 * @dest: the location to where the byte is copied to.
 * Return: return a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i  < n; i++)
		dest[i] = src[i];
	return (dest);
}

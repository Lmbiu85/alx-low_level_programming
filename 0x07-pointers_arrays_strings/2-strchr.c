#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 * @c: first occurance of the character c
 * @s: the string
 * Return: NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}

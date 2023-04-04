#include "main.h"

/**
 * _strspn - a function thaty gets the lenght of a prefix substring
 * @s: initial segment of the number of bytes
 * @accept: The string to be checked if s id consistent with.
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (accept[b] == '\0')
			break;
	}
	return (a);
}

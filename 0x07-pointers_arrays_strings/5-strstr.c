#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring
 * @needle: the substring to be searched
 * @haystack: the string where the substring is to be searched
 * Return: a pointer or NULL if the string is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}
	return (0);
}

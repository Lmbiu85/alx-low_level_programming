#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string that is to be concatenated to
 * @s2: string that is to be concatenated from
 * @n: number of bythes to be allocated
 * Return: if function fails return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len_s1 = 0, len_s2 = 0, a = 0, b = 0;

	while (s1 && s1[len_s1])
		len_s1++;
	while (s2 && s2[len_s2])
		len_s2++;

	if (n < len_s2)
		concat = malloc(sizeof(char) * (len_s1 + n + 1));
	else
		concat = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!concat)
		return (NULL);
	while (a < len_s1)
	{
		concat[a] = s1[a];
		a++;
	}
	while (n < len_s2 && a < (len_s1 + n))
		concat[a++] = s2[b++];
	while (n >= len_s2 && a < (len_s1 + len_s2))
		concat[a++] = s2[b++];
	concat[a] = '\0';
	return (concat);
}

#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to the new memory space allocated
 * @str: the string copied
 * Return: NULL if str=NULL
 */
char *_strdup(char *str)
{
	int a;
	int j = 0;
	char *z;

	if (str == NULL)
		return (NULL);
	a = 0;

	while (str[a] != '\0')
		a++;

	z = malloc(sizeof(char) * (a + 1));

	if (z == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		z[j] = str[j];
	return (z);
}

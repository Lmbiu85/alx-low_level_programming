#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments
 * @ac: integer input
 * @av: a double pointer array
 * Return: NUll if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int c = 0;
	int d = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;
	str = malloc(sizeof(char) * d + 1);

	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		if (str[c] == '\0')

		{
			str[c++] = '\n';
		}
	}

	return (str);
}

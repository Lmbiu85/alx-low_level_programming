#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenete 2 strings
 * @s1: string input 1
 * @s2: string input 2
 * Return: concatenate of s1 & s2
 */
char *str_concat(char *s1, char *s2)
{
	int a;
	int x;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = x = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[x] != '\0')
		x++;
	con = malloc(sizeof(char) * (a + x + 1));

	if (con == NULL)
		return (NULL);
	a = x = 0;
	while (s1[a] != '\0')
	{
		con[a] = s1[a];
		a++;
	}
	while (s2[x] != '\0')
	{
		con[a] = s2[x];
		a++, x++;
	}
	con[a] = '\0';
	return (con);
}

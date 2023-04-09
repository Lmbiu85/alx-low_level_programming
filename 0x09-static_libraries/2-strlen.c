#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string to check
 * Return: 0
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}

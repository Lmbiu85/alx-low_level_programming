#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_word - function that counts the number of words in the string
 * @str: the string to be checked
 * Return: the number of words counted
 */

int count_word(const char *str)
{
	int count = 0;

	while (*str)
	{
		while (*str == ' ')
		       str++;

		if (*str != '\0')
			count++;
		while (*str && *str != ' ')
		       str++;
	}
	return (count);
}

/**
 * **strtow - sfunction that splits string into words
 * @str: the string that is splited
 * Return: NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	int a, y = 0, len = 0, words;
	int f = 0, start, end;
	char **matrix;
	char *tmp;

	while (*(str + len))
		len++;
	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (f)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (f + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[y] = tmp - f;
				y++;
				f = 0;
			}
		}
		else if (f++ == 0)
			start = a;
	}
	matrix[y] = NULL;
	return (matrix);
}

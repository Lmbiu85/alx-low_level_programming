#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string
 * @s: String container
 *
 * Return: String container capitalize with expected words
 */

char *cap_string(char *s)
{
	int flag = 0, i = 0;

	while (s[i])
	{
		if (flag == 0 && (s[i] >= 97 && s[i] <= 122))
		{
			s[i] = s[i] - 32;
			flag = 1;
		}
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			 s[i] == ',' || s[i] == ';' || s[i] == '.' ||
			 s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			 s[i] == '(' || s[i] == ')' || s[i] == '{' ||
			 s[i] == '}')
		{
			flag = 0;
		}
		i++;
	}
	return (s);
}

#include "main.h"

/**
 * rot13 - Function that encodes a string using "rot13"
 * @s: String container
 *
 * Return: String encode in rot13
 */

char *rot13(char *s)
{
	int i, j;
	char rot[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i])
	{
		for (j = 0; j < 53; j++)
		{
			if (s[i] == rot[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
		i++;
	}
	return (s);
}

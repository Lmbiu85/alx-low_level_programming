#include "main.h"

int check_pal(char *s, int i, int lt);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * @s: the string to be checked
 * Return: 1 if is palindrome otherwise 0.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the lebgth of a string
 * @s: string to be checked
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks  the character for palindrome recursively
 * @s: string to check
 * @i: iteration
 * @lt: lngth of the string
 * Return: 1 if palindrome otherwise 0
 */
int check_pal(char *s, int i, int lt)
{
	if (*(s + i) != *(s + lt - 1))
		return (0);
	if (i >= lt)
		return (1);
	return (check_pal(s, i + 1, lt - 1));
}

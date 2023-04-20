#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: The string to be printed between strings.
 * @n: no of strings pass
 * @...: variable number of strings
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int a;
	char *s;

	va_start(str, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(str, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}

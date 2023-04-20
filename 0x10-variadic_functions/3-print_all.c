#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int j = 0;
	char *t;
	char *s = ", ";

	va_start(list, format);

	while ((format != NULL) && *(format + j) != '\0')
	{
		switch (*(format + j))
		{
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 's':
				t = va_arg(list, char *);
				t = (t != NULL) ? t : "(nil)";
				printf("%s", t);
				break;
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			default:
				j++;
				continue;
		}
		if (*(format + j + 1) != 0)
		{
			printf("%s", s);
		}
		j++;
	}
	putchar(10);
	va_end(list);
}

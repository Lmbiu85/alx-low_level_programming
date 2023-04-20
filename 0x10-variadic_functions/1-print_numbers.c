#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the no of integers passed to the function
 * @...: variable number of paramters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list no;
	unsigned int j;

	va_start(no, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(no, int));
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(no);
}

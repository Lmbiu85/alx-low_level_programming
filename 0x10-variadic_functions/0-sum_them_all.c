#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that return sum of all its parameters
 * @n: the no of parameters passed to the function
 * @...: variable no of parameters
 * Return: 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	for (a = 0; a < n; a++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}

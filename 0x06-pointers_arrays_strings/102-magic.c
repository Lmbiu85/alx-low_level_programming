#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];

	a[0] = 98;
	a[1] = 402;
	a[2] = -198;
	a[3] = 298;
	a[4] = -1024;

	int *p;

	p = &a[2];
	printf("a[2] = %d\n", *p);
	printf("a[2] = %d\n", a[2]);

	return (0);
}

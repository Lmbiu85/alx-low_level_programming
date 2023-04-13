#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function to allocate memory using malloc
 * @b: number of bytes thats is to be allocated
 * Return: a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *prt = malloc(b);


	if (prt == NULL)

		exit(98);
	return (prt);
}

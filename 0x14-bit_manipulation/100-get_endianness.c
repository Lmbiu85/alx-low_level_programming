#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_endianness - function that checks the machine
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *p = (char *)&i;

	return (*p);
}

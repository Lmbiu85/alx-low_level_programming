#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *p = (char *)&i;

	return (p[0] == 1);
}

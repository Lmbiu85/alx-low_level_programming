#include <stdio.h>
#include <stdlib.h>
/**
 * light - function that prints an output before
 * the function is executed
 */
void light(void) __attribute__ ((constructor));
void light(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

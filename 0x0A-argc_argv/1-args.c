#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed int the program
 * @argc: the number of arguments passed into the program
 * @argv: array that holds the string value of the arguments passed
 * Return: Awlays 0
 */
int main(int argc, char *argv[])
{
	(void)argv;/*we are ignoring argv as its unused*/
	printf("%d\n", argc - 1);

	return (0);
}

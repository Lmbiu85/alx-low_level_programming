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
	int c;

	c = argc - 1;
	printf("%d\n", c);

	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name followed by \n
 * @argc: number of arguments passed
 * @argv: array that hols string values.
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

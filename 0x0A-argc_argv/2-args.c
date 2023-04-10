#include <stdio.h>
#include "main.h"

/**
 * main - it prints all arguments it receives
 * @argc: the number of arguments received
 * @argv: array of arguments received
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}

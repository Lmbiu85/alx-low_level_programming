#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed
 * @argv: arrays to the argument
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int b;
	int bytes;
	char *ary;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ary = (char *)main;
	for (b = 0; b < bytes; b++)
	{
		if (b == bytes - 1)
		{
			printf("%02hhx\n", ary[b]);
			break;
		}
		printf("%02hhx", ary[b]);
	}
	return (0);
}

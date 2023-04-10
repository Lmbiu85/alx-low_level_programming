#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * main - program multiplies two numbers
 * @argc: number of arguments passed
 * @argv: array that hold string values
 * Return: 0 if successful, 1 if two arguments are not received
 */
int main(int argc, char **argv)
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}

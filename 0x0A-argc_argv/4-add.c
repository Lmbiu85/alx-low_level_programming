#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if a string contains only digits
 * @str: the string to check
 *
 * Return: Always 0
 */
int check_num(const char *str)
{
	for (; *str != '\0'; str++)
	{
		if (!isdigit(*str))
			return (0);
	}
	return (1);
}


/**
 * main - print the name of the program
 * @argc: counts the arguments passed
 * @argv: array holding sting value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

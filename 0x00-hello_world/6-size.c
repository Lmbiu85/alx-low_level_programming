#include <stdio.h>

/**
 * main - ENTRY POINT
 *
 * Return: always 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	lon long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}

#include <stdlib.h>
#include <time.h>
/* more headers goes there*/
#include <stdio.h>
/*betty style*/
/**
 * main - prints a text according number
 * 
 *Return: always 0
 */

int main(void)

{
	int n; 
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
	printf("Last digit of %d  is %d and is reater than 5", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("Last digit of %d and is 0", n, lastd);
	}
	else if (last < 6 && lastd !=0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, lastd)
	return (0);
}

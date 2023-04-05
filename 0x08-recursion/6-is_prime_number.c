#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - returns prime numbers
 * @n: number to be checked
 * Return: 1 if its prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if the number is a prime number recursively
 * @n: the number to be check
 * @i: iterator
 * Return: 1 if it prime otherwise 0.
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

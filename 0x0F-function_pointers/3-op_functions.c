#include "3-calc.h"

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);

/**
 * op_add - Returns the sum of two numbers.
 * @x: the first no of the sum
 * @y: the second no of the sum
 * Return: sum of x and y
 */
int op_add(int x, int y)
{
	return (x + y);
}

/**
 * op_sub - function that calculates subtraction
 * @x: first no in the subtraction
 * @y: second no of subtraction
 * Return: the difference between x and y
 */
int op_sub(int x, int y)
{
	return (x - y);
}

/**
 * op_mul - calculates the product  x & y
 * @x: the first no
 * @y: the second no
 * Return: the product of x and y
 */
int op_mul(int x, int y)
{
	return (x * y);
}

/**
 * op_div - calculate the division of x and y
 * @x: first no
 * @y: second no
 * Return: the division of x and y
 */
int op_div(int x, int y)
{
	return (x / y);
}

/**
 * op_mod - modulus of two no x and y
 * @x: first no
 * @y: second no
 * Return: modulus of two numbers
 */
int op_mod(int x, int y)
{
	return (x % y);
}

#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function that performs the operation asked
 * @s: the passed argument
 * Return: a pointer to the function that corresponds to the  
 * operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int a = 0;

	while (ops[a].op != NULL && *(ops[a].op) != *s)
		a++;
	return (ops[a].f);
}

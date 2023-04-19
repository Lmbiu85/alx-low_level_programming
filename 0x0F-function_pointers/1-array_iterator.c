#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: input array
 * @size: size of the array
 * @action: pointer to the function to be executed on each element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

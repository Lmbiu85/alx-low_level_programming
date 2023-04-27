#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list.
 *
 * @h: Parameter with the list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		h = h->next;
	}

	return (a);
}

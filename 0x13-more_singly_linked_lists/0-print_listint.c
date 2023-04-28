#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}

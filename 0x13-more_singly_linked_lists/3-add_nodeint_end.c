#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer that points the linked list
 * @n: data type
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw, *tp;

	tp = *head;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
	{
		return (NULL);
	}
	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
	}
	else
	{
		while (tp->next)
		{
			tp = tp->next;
		}
		tp->next = nw;
	}

	return (nw);
}

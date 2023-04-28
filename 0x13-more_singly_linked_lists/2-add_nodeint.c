#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: a double pointer to the head
 * @n: value of the data
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
	{
		return (NULL);
	}
	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}

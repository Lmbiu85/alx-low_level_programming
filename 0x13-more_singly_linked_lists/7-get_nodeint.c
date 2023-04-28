#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to first node in the linked list
 * @index: index of the node starting at 0
 * Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	do {
		if (i == index)
			return (new);
		i++;
		new = new->next;
	} while (new != NULL);

	return (NULL);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: a pointer to the first node in list
 * @idx: index to the node
 * @n: data to be inputed in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp = *head, *anx;
	unsigned int x = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (x < idx - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		x++;
	}
	if (tmp == NULL)
	{
		free(node);
		return (NULL);
	}
	anx = tmp->next;
	tmp->next = node;
	node->next = anx;
	return (node);
}

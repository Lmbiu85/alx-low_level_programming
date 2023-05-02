#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to the node
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;

	listint_t *current, *tmp;

	if (h == NULL || *h == NULL)
	{
		return (count);
	}

	while (*h != NULL)
	{
		current = *h;
		*h = current->next;
		current->next = NULL;
		count++;

		for (tmp = *h; tmp != NULL && tmp != current; tmp = tmp->next)
		{
			if (tmp < current)
			{
				break;
			}
		}

		if (tmp == current)
		{
			free(current);
		}
		else
		{
			current->next = *h;
			*h = current;
		}
	}

	return (count);
}


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index index 
 * of a listint_t linked list
 * @head: points to the first element in the list
 * @index: index of the node to delete 
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *mp = *head, *x;
	unsigned int a;

	if (!head || !*head)
		return (-1);

	if (index != 0)
	{
		for (a = 0; a + 1 < index; a++)
		{
			if (mp->next == NULL)
			{
				return (-1);
			}
			mp = mp->next;
		}
		x = mp->next->next;
		free(mp->next);
		mp->next = x;
		return (1);
	}
	else
	{
		mp = (*head)->next;
		free(*head);
		*head = mp;
		return (1);
	}
}

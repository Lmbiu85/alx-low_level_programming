#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint -  function that frees a listint_t list.
 *
 * @head: point to the head of the linked list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *mp;

	while (head)
	{
		mp = head->next;
		free(head);
		head = mp;
	}
}

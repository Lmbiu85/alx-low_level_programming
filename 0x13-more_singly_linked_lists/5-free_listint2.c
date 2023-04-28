#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: pointer to the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *mp;

	if (head == NULL)
		return;

	do {
		mp = (*head)->next;
		free(*head);
		*head = mp;
	} while (*head != NULL);

	*head = NULL;
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *mp, *mp2;
	int a;

	if (*head == NULL)
	{
		return (0);
	}

	do {
		mp = *head;
		mp2 = mp->next;
		a = mp->n;
		free(*head);
		*head = mp2;
	} while (0);

	return (a);
}

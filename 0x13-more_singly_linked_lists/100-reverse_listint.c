#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: a pointer to the first node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pv = NULL;
	listint_t *nx = NULL;

	while (*head)
	{
		nx = (*head)->next;
		(*head)->next = pv;
		pv = *head;
		*head = nx;
	}

	*head = pv;
	return (*head);
}

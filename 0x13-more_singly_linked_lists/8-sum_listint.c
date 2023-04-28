#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * sum_listint -  function that returns the sum of all the data (n)
 * @head: the first node in the list
 * Return: 0 if the list is empty,
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *nw;

	for (sum = 0, nw = head; nw; nw = nw->next)
		sum += nw->n;

	return (sum);
}

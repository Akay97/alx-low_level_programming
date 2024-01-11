#include "lists.h"

/**
 * sum_dlistint - a function that return the sum of all
 * data in a linked list
 * @head: the first node
 * Return: sum of true or 0 if the list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ilt;

	ilt = head;
	while (ilt != NULL)
	{
		sum += ilt->n;
		ilt = ilt->next;
	}
	return (sum);
}

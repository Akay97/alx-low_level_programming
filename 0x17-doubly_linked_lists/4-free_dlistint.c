#include "lists.h"

/**
 * free_dlistint - a function that free a node from a
 * linked list
 * @head: the head of the linked list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *first, *nxt;

	first = head;

	while (first != NULL)
	{
		nxt = first->next;
		free(first);
		first = nxt;
	}
}

#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a function that free a linked list
 * @head: the first element
 */

void free_listint(listint_t *head)
{
	listint_t *pnt;

	while (head != NULL)
	{
		pnt = head;
		head = head->next;
		free(pnt);
	}
}

#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that free a listint_t list
 * @head: the first element
 */

void free_listint2(listint_t **head)
{
	listint_t *pnt;

	while (*head != NULL)
	{
		pnt = *head;
		*head = (*head)->next;
		free(pnt);
	}

	*head = NULL;
}

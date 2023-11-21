#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes nodes at index
 * @head: the first node
 * @index: index of the node to be deleted
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *pnt;
	listint_t *prev;
	unsigned int a;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	pnt = *head;
	prev = NULL;

	for (a = 0; a < index && pnt != NULL; a++)
	{
		prev = pnt;
		pnt = pnt->next;
	}

	if (pnt == NULL)
	{
		return (-1);
	}

	prev->next = pnt->next;
	free(pnt);
	return (1);
}

#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes a
 * node at a particular index
 * @head: the first node
 * @index: the index of the node to delete
 * Return: 1 if successful and -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ilt;
	unsigned int num = 0;

	ilt = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = ilt->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(ilt);
		return (1);
	}
	while (ilt != NULL && num < index)
	{
		ilt = ilt->next;
		num++;
	}
	if (ilt == NULL)
	{
		return (-1);
	}
	if (ilt->prev != NULL)
	{
		ilt->next->prev = ilt->prev;
	}
	if (ilt->prev != NULL)
	{
		ilt->prev->next = ilt->next;
	}
	free(ilt);
	return (1);
}

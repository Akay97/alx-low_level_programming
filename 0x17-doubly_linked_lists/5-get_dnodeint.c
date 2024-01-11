#include "lists.h"

/**
 * get_dnodeint_at_index - a function that return the
 * nth node of a linked list
 * @head: the head of the linked list
 * @index: the position of the nodes
 * Return: NULL if node does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;
	dlistint_t *ilt;

	ilt = head;
	while (ilt != NULL)
	{
		if (num == index)
		{
			return (ilt);
		}
		ilt = ilt->next;
		num++;
	}
	return (NULL);
}

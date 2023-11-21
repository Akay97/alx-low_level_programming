#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * @head: the first node
 * Return: the stored data
 */

int pop_listint(listint_t **head)
{
	int info;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	info = (*head)->n;
	temp = *head;

	*head = (*head)->next;
	free(temp);

	return (info);
}

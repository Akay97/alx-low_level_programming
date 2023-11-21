#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that add a node at the end of a list
 * @head: the first node
 * @n: an integer
 * Return: an address to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_n = malloc(sizeof(listint_t));

	if (node_n == NULL)
	{
		return (NULL);
	}

	node_n->n = n;
	node_n->next = NULL;

	if (*head == NULL)
	{
		*head = node_n;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = node_n;
	}

	return (node_n);
}

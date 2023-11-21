#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * @idx: the index of the list where node is added
 * @head: the first node
 * @n: an integer
 * Return: the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_n;
	listint_t *current;
	listint_t *prev;
	unsigned int i;

	node_n = malloc(sizeof(listint_t));

	if (node_n == NULL)
	{
		return (NULL);
	}

	node_n->n = n;

	if (idx == 0)
	{
		node_n->next = *head;
		*head = node_n;
		return (node_n);
	}

	current = *head;
	prev = NULL;

	for (i = 0; i < idx && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (prev == NULL)
	{
		free(node_n);
		return (NULL);
	}

	prev->next = node_n;
	node_n->next = current;

	return (node_n);
}

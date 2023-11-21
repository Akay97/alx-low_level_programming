#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - a function that add a new node at the beginning of a list
 * @head: pointer to the first node
 * @n: an integer
 * Return: the added node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_n;

	node_n = malloc(sizeof(listint_t));
	if (node_n == NULL)
	{
		return (NULL);
	}
	node_n->n = n;
	node_n->next = *head;
	*head = node_n;

	return (node_n);
}

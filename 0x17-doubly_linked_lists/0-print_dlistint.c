#include "lists.h"

/**
 * print_dlistint - a function that prints the number of elements
 * of a node
 * @h: the head of the node
 * Return: the number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num++;
	}
	return (node_num);
}

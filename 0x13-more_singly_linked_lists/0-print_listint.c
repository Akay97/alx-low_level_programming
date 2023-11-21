#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all element
 * @h: the pointer to the head
 * Return: the number of node
 */

size_t print_listint(const listint_t *h)
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

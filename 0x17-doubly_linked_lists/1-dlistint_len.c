#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a linked list
 * @h: the head of the node
 * Return: the number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements_num = 0;

	while (h != NULL)
	{
		h = h->next;
		elements_num++;
	}
	return (elements_num);
}

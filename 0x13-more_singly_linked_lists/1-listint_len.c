#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - a function that return the number of elements
 * @h: the number of element
 * Return: the number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}

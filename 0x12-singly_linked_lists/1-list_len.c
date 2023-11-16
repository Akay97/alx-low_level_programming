#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function thatreturn the number of elements
 * @h: the number of element
 * Return: the number of element
 */

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}

	return (number);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - the function that prints all element
 * @h: the elements
 * Return: the number of elements
 */

size_t print_list(const list_t *h)
{
	size_t total = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		total++;
		h = h->next;
	}
	return (total);
}

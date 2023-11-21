#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - a function that free a linked list
 * @h: the first node
 * Return: the size of the node
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tot = *h;
	listint_t *her = *h;
	listint_t *temp;
	size_t size = 0;

	while (her != NULL && her->next != NULL)
	{
		temp = tot;
		tot = tot->next;
		her = her->next->next;
		free(temp);
		size++;

		if (her == tot)
		{
			*h = NULL;
			return (size);
		}
	}

	while (tot != NULL)
	{
		temp = tot;
		tot = tot->next;
		free(temp);
		size++;
	}

	*h = NULL;
	return (size);
}

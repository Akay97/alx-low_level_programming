#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - a function that print a list linked list
 * @head: the first node
 * Return: the count
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tot = head;
	const listint_t *her = head;
	size_t count = 0;

	while (her != NULL && her->next != NULL)
	{
		printf("[%p] %d\n", (void *)her, her->n);
		her = her->next->next;
		tot = tot->next;
		count++;

		if (her == tot)
		{
			printf("-> [%p] %d\n", (void *)her, her->n);
			exit(98);
		}
	}

	return (count);
}

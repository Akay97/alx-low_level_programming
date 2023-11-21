#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 * the data of a linked list
 * @head: the first element
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

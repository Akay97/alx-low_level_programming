#include "lists.h"

/**
 * reverse_listint - a function that reverse a linked list
 * @head: the first node
 * Return: the prevois node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pnt;
	listint_t *prev;
	listint_t *next;

	prev = NULL;
	pnt = *head;

	while (pnt != NULL)
	{
		next = pnt->next;
		pnt->next = prev;
		prev = pnt;
		pnt = next;
	}

	*head = prev;

	return (prev);
}

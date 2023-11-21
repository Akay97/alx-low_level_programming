#include "lists.h"

/**
 * find_listint_loop -  a function that find a loop in a linked list
 * @head: the first node
 * Return: NULL if no loop is found
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tot = head;
	listint_t *her = head;

	while (her != NULL && her->next != NULL)
	{
		tot = tot->next;
		her = her->next->next;

		if (tot == her)
		{
			tot = head;
			while (tot != her)
			{
				tot = tot->next;
				her = her->next;
			}
			return (tot);
		}
	}

	return (NULL);
}

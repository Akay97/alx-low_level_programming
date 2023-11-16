#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a funtion that free the list
 * @head: the first list
 */
void free_list(list_t *head)
{
	list_t *lst;

	while (head)
	{
		lst = head->next;
		free(head->str);
		free(head);
		head = lst;
	}
}

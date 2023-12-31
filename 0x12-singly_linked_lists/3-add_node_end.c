#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that add a node at the end of a list
 * @head: the first node
 * @str: a string
 * Return: the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *pent = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (pent->next)
	pent = pent->next;

	pent->next = new_node;

	return (new_node);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that add a new node at the beginning of a list
 * @head: the first node
 * @str: a string
 * Return: the added node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_n;

	if (str == NULL)
	{
		return (NULL);
	}

	node_n = malloc(sizeof(list_t));
	if (node_n == NULL)
	{
		return (NULL);
	}

	node_n->str = strdup(str);
	if (node_n->str == NULL)
	{
		free(node_n);
		return (NULL);
	}

	node_n->len = strlen(str);
	node_n->next = *head;
	*head = node_n;

	return (node_n);
}

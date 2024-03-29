#include "lists.h"

/**
 * add_dnodeint - a function that add a new node to the neginning
 * of a double linked list
 * @head: the head of the node
 * @n: the value of the new node
 * Return: the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->prev = NULL;
	n_node->n = n;
	n_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = n_node;
	}
	*head = n_node;
	return (n_node);
}

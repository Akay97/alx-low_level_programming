#include "lists.h"

/**
 * add_dnodeint_end -  a function that add a node at the end
 * of a linked list
 * @head: the head of the node
 * @n: the value of the new node
 * Return: the new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;
	dlistint_t *ilt;

	end_node = malloc(sizeof(dlistint_t));

	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
	}
	else
	{
		ilt = *head;
		while (ilt->next != NULL)
		{
			ilt = ilt->next;
		}
		end_node->prev = ilt;
		ilt->next = end_node;
	}

	return (end_node);
}

#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a  linked list
 * @head: the first node
 * @index: the index of the node
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index && head != NULL; i++)
{
head = head->next;
}

return ((i == index) ? head : NULL);
}

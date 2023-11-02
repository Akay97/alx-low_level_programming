#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - the function name
 * @new_size: the new size
 * @old_size: the old size
 * @ptr: a pointer to a memory allocated
 * Return: 0 as success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int cp, i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	cp = (old_size < new_size) ? old_size : new_size;
	for (i = 0; i < cp; i++)
	{
		*((char *)new_ptr + i) = *((char *) ptr + i);
	}
	free(ptr);
	return (new_ptr);
}

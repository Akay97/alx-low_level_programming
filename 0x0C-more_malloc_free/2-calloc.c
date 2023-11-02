#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - the function name
 * @nmemb: the nunber of varables t8o allocate memory for
 * @size: the size of bytes to allocate for each variables
 * Return: 0 as success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int t_bytes, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	t_bytes = nmemb * size;
	for (i = 0; i < t_bytes; i++)
	{
	*((char *)ptr + i) = 0;
	}
	return (ptr);
}

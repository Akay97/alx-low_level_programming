#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - the function name
 * @size: the size of the integer
 * @c: the varibale that stores the characters
 * Return: 0 as success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}

	ar = (char *)malloc(size * sizeof(char));

	if (ar != NULL)
	{
		for (b = 0; b < size; b++)
		{
			ar[b] = c;
		}
	}
	return (ar);
}

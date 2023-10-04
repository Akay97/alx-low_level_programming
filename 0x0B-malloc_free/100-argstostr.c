#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenate all arguments into a single string.
 * @ac: Argument count.
 * @av: Array of argument strings.
 * Return: Pointer to concatenated string (or NULL on failure).
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j, k = 0;
	char *result;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
		total_length++;
		total_length++;
		}
	}

	result = (char *)malloc(total_length + 1);

	if (result != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				result[k++] = av[i][j];

			}
			result[k++] = '\n';
		}
		result[k] = '\0';
	}

	return (result);
}

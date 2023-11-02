#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - the function name
 * @min: the mminimum value for the range
 * @max: the range maximum value
 * Return: 0 as success
 */

int *array_range(int min, int max)
{
	int i, *ray, elem;

	if (min > max)
	{
		return (NULL);
	}
	elem = (max - min) + 1;

	ray = (int *)malloc(elem * sizeof(int));
	if (ray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < elem; i++)
	{
		ray[i] = min + i;
	}
	return (ray);
}


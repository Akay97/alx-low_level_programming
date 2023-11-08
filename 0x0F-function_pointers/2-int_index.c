#include "function_pointers.h"

/**
 * int_index - the function name
 * @size: size of the array
 * @array: an array
 * @cmp: pointer to the function
 * Return: an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int dex;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (dex = 0; dex < size ; dex++)
	{
		if (cmp(array[dex]) != 0)
		{
			return (dex);
		}
	}
	return (-1);
}

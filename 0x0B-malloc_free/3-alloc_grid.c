#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - the function name
 * @width: the string one
 * @height: the string two
 * Return: 0 as success
 */

int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		grid[a] = (int *)malloc(width *sizeof(int));
		if (grid[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(grid[b]);
			}
		free(grid);
		return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}

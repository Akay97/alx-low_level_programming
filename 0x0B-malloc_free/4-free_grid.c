#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - the function name
 * @grid: grid to be freed
 * @height: the height
 * Return: 0 as success
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid != NULL)
	{
		for (a = 0; a < height; a++)
		{
			free(grid[a]);
		}
		free(grid);
	}
}

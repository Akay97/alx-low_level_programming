#include "main.h"
#include <stdio.h>

/**
* print_array - the function name
* @a: the variable that holds the array
* @n: the number aof elements of the array to be printed
* Return: 0 as success
*/

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

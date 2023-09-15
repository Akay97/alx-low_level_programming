#include <stdio.h>
#include "main.h"

/**
 * print_square - the function name
 * @size: the size of the sqaure
 * Return: 0 as success
 */
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
	{
		putchar('#');
	}
	putchar('\n');
	}
}

#include <stdio.h>
#include "main.h"

/**
 * print_triangle - the function name
 * @size: the of the triangle
 * Return: 0 is success
 */
void print_triangle(int size)
{
	int a;
	int c;
	int b;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b >= 1; b--)
			{
			putchar(' ');
			}
	for (c = 1; c <= a; c++)
	{
		putchar('#');
	}
		putchar('\n');
	}
	}
}

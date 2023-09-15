#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - the function name
 * @n: the number of times the character would be printed
 * Return: 0 as success
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		putchar('\n');
	}
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
		{
				putchar(' ');
		}
	putchar('\\');
	putchar('\n');
		}
}

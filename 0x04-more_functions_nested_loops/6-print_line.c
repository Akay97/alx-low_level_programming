#include <stdio.h>
#include "main.h"

/**
 * print_line - function name
 * @n: number of times the function will be printed
 * Return: 0 as success
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		putchar('_');
	}
	putchar('\n');
}

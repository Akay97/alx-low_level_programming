#include <stdio.h>
#include "main.h"

/**
 * print_numbers - the function name
 *
 * Return: 0 as success
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
}

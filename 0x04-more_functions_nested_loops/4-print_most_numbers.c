#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - the function name
 *
 * Return: 0 always success
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
		{
			putchar(a + '0');
		}
	}
	putchar('\n');
}

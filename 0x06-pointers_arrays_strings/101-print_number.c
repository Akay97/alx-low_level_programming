#include "main.h"
#include <stdio.h>

/**
 * print_number - the function name
 * @n: the integer to be printed
 * Return: Always 0 as success
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
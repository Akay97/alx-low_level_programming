#include <stdio.h>
#include "main.h"

/**
 * print_number - the function name
 * @n: the integer to be printed
 * Return: 0 as success
 */
void print_number(int n)
{

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		putchar(n / 10);
	}
	putchar((n % 10) + '0');
}

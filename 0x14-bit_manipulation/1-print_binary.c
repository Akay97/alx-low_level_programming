#include <stdio.h>

/**
 * print_binary - a function that print a binary
 * @n: the integer
 */

void print_binary(unsigned long int n)
{
	int shift, bt, flag;

	flag = 0;
	shift = sizeof(unsigned long int) * 8 - 1;

	while (shift >= 0)
	{
		bt = (n >> shift) & 1;
		if (bt || flag)
		{
			putchar(bt + '0');
			flag = 1;
		}
		shift--;
	}

	if (!flag)
	{
		putchar('0');
	}
}

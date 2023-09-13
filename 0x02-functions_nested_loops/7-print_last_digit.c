#include "main.h"

/**
 * print_last_digit - the defined function name
 * @num: the value to print
 * Return: (0) always success
 */
int print_last_digit(int num)
{
	int m;

	m = num % 10;
	if (m < 0)
	{
		m = m * -1;
	}
	_putchar('0' + m);
	return (m);
}

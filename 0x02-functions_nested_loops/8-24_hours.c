#include "main.h"

/**
 * jack_bauer - the function name
 *
 * Return: (0) as success
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
		_putchar('0' + a / 10);
		_putchar('0' + a % 10);
		_putchar(':');
		_putchar('0' + b / 10);
		_putchar('0' + b % 10);
		_putchar('\n');
		}
	}
}

#include <stdio.h>

/**
 * _print_rev_recursion - the function name
 * @s: the string to be reversed
 * Return: 0 always success
 */

void _print_rev_recursion(char *s)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = a - 1; b >= 0; b--)
	{
		putchar(s[b]);
	}
}

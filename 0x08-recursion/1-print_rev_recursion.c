#include <stdio.h>

/**
 * _print_rev_recursion - the function name
 * @s: the string to be reversed
 * Return: 0 always success
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

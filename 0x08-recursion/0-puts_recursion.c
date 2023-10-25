#include <stdio.h>

/**
 * _puts_recursion - the function name
 * @s: the string to be printed
 * Return: 0 always success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}

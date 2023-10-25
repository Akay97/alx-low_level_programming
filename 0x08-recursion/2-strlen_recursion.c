#include <stdio.h>

/**
 * _strlen_recursion - the function name
 * @s: the string which lenght is to be printed
 * Return: 0 always success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

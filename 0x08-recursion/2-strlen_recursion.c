#include <stdio.h>

/**
 * _strlen_recursion - the function name
 * @s: the string which lenght is to be printed
 * Return: 0 always success
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

#include <stdio.h>

/**
 * _strcmp - the function name
 * @s1: the first string
 * @s2: the second string
 * Return: Always 0 as success
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

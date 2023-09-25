#include <stdio.h>

/**
 * _memset - the function name
 * @s: the first character
 * @b: the second character
 * @n: the bytes of the memory space
 * Return: 0 as success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

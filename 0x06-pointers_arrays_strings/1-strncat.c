#include <stdio.h>

/**
 * _strncat - the function name
 * @dest: the first string
 * @src: the second string
 * @n: number of bytes to be used
 * Return: Always 0 as success
 */

char *_strncat(char *dest, char *src, int n)
{
	char *c = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

		*dest = '\0';
	return (c);
}

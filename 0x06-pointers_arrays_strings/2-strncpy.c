#include <stdio.h>

/**
 * _strncpy - the function name
 * @dest: the first string
 * @src: the second string
 * @n: number of bytes to be used
 * Return: Always 0 as success
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *c = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		src++;
		n--;
	}
	return (c);
}

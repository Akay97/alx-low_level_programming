#include <stdio.h>

/**
 * _strcat - the function name
 * @dest: the first string
 * @src: the second string
 * Return: Always 0 as success
 */

char *_strcat(char *dest, char *src)
{
	char *c = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

		*dest = '\0';
	return (c);
}

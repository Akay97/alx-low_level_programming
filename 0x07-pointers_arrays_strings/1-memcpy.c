#include <stdio.h>

/**
 * _memcpy - the function name
 * @dest: the first character
 * @src: the second character
 * @n: the bytes of the memory space
 * Return: 0 as success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}

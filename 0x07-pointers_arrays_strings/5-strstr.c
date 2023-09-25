#include <stdio.h>

/**
 * _strstr - the function name
 * @haystack: the main string
 * @needle: the sub string
 * Return: 0 as success
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*b != '\0' && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

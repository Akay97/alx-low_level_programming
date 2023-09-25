#include <stdio.h>

/**
 * _strchr - the function name
 * @s: the first character
 * @c: the second character
 * Return: 0 as success
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

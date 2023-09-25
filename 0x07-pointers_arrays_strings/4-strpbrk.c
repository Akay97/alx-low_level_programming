#include <stdio.h>

/**
 * _strpbrk - the function name
 * @s: the character
 * @accept: where the bytes is reserved
 * Return: 0 as success
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
		a++;
		}
	s++;
	}
	return (NULL);
}

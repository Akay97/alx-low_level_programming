#include <stdio.h>

/**
 * string_toupper - the function name
 * @c: the string to be changed
 * Return: Always 0 as success
 */

char *string_toupper(char *c)
{
	char *b = c;

	while (*b != '\0')
	{
		if (*b >= 'a' && *b <= 'z')
		{
			*b = *b - 'a' + 'A';
		}
		b++;
	}
	return (c);
}

#include <stdio.h>

/**
 * binary_to_uint - a functio that convert a binary number into
 * an unsigned int
 * @b: the pointer to a string
 * Return: the result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		res = (res << 1) | (*b - '0');
		b++;
	}
	return (res);
}

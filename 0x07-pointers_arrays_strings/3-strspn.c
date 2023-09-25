#include <stdio.h>

/**
 * _strspn - the function name
 * @s: the character
 * @accept: where the bytes is reserved
 * Return: 0 a success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;
	char *c;

	while (*s != '\0')
	{
		b = 0;
		for (c = accept; *c != '\0'; c++)
		{
			if (*s == *c)
			{
				b = 1;
				break;
			}
		}
		if (b == 0)
		{
			return (a);
		}
			s++;
			a++;
	}
	return (a);
}

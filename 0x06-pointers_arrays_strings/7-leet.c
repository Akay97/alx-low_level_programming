#include <stdio.h>

/**
 * leet - the function name
 * @str: the string to be encoded
 * Return: Always 0 as success
 */

char *leet(char *str)
{
	char c;
	char *g = str;

	while (*str)
	{
		c = *str;
		if ((c == 'a' || c == 'A') ||
		(c == 'e' || c == 'E') ||
		(c == 'o' || c == 'O') ||
		(c == 't' || c == 'T') ||
		(c == 'l' || c == 'L'))
		{
		*str = (c == 'a' || c == 'A') ? '4' :
		(c == 'e' || c == 'E') ? '3' :
		(c == 'o' || c == 'O') ? '0' :
		(c == 't' || c == 'T') ? '7' :
		'1';
		}
			str++;
	}

	return (g);
}

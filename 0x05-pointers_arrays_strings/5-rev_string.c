#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* rev_string - the function name
* @s: the variable to be reversed
* Return: 0 as success
*/

void rev_string(char *s)
{
	int len = strlen(s);
	int a = 0;
	int b = len - 1;
	char c;

	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		b--;
	}
}

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - the function name
* @str: the string to be printed
* Return: 0 as success
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int a;
	int b = (len + 1) / 2;

	for (a = b; a < len; a++)
	{
		putchar(str[a]);
	}
	putchar('\n');
}

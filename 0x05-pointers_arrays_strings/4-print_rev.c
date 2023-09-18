#include "main.h"
#include <stdio.h>

/**
* print_rev - the defined function
* @str: the variable to be reversed
* Return: 0 as success
*/

void print_rev(char *str)
{
	int a;
	int len  = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (a = len - 1; a >= 0; a--)
	{
		putchar(str[a]);
	}
	putchar('\n');
}


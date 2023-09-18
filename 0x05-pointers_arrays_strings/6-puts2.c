#include "main.h"
#include <stdio.h>

/**
* puts2 - the function name
* @str: the string to be printed
* Return: 0 as success
*/

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		putchar(str[a]);
		a += 2;
	}
	putchar('\n');
}

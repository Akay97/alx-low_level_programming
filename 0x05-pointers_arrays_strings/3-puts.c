#include "main.h"
#include <stdio.h>

/**
* _puts - the function name
* @str: the variable to be printed
* Return: 0 always success
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
* _strlen - the function name
* @s: the variable which lenght will be printed
* Return: 0 as succedd
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

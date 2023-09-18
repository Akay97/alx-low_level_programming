#include "main.h"
#include <stdio.h>

/**
* _strcpy - the function name
* @desk: the pointer to the buffer
* @src: the pointer to the string
* Return: 0 as success
*/

char *_strcpy(char *desk, char *src)
{
	char *desk_a = desk;

	while (*src != '\0')
	{
		*desk = *src;
		desk++;
		src++;
	}
		*desk = '\0';
	return (desk_a);
}

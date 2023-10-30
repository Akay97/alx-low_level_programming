#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - the function name
 * @str: the strings
 * Return: 0 as success
 */

char *_strdup(char *str)
{
	int len;
	int a;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup != NULL)
	{
		for (a = 0; a <= len; a++)
		{
			dup[a] = str[a];
		}
	}
	return (dup);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - The function name
 * @s1: the first string to be concatinated
 * @s2: the second string to be concatinated
 * @n: the maximum unmber of bytes
 * Return: 0 as success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenght, lenght2, i;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lenght = 0;
	while (s1[lenght] !=  '\0')
	{
		lenght++;
	}
	lenght2 = 0;
	while (s2[lenght2] != '\0')
	{
		lenght2++;
	}
	if (n >= lenght2)
	{
		n = lenght2;
	}
	result = (char *)malloc(lenght + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lenght; i++)
	{
	result[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		result[lenght + i] = s2[i];
	}
	result[lenght + n] = '\0';
	return (result);
}

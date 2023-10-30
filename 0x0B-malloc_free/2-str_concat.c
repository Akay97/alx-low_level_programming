#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - the function name
 * @s1: the string one
 * @s2: the string two
 * Return: 0 as success
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int a;
	int len;
	int len1;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}

	len1 = 0;
	while (s2[len1] != '\0')
	{
		len1++;
	}

	con = (char *)malloc((len + len1 + 1) * sizeof(char));
	if (con != NULL)
	{
		for (a = 0; a < len; a++)
		{
			con[a] = s1[a];
		}
		for (a = 0; a < len1; a++)
		{
			con[len + a] = s2[a];
		}
	con[len + len1] = '\0';
	}
	return (con);
}

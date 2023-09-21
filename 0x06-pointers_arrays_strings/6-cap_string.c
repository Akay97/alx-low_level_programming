#include <stdio.h>

/**
 * cap_string - the function name
 * @var: the string to be capitalized
 * Return: Always 0 as success
 */

char *cap_string(char *var)
{
	int cp = 1;
	int i;

	for (i = 0; var[i] != '\0'; i++)
	{
		if (var[i] == ' ' || var[i] == '\t' || var[i] == '\n' ||
			var[i] == ',' || var[i] == ';' || var[i] == '.' ||
			var[i] == '!' || var[i] == '?' || var[i] == '"' ||
			var[i] == '(' || var[i] == ')' || var[i] == '{' || var[i] == '}')
		{
			cp = 1;
		}
	else if (cp && var[i] >= 'a' && var[i] <= 'z')
	{
		var[i] -= 32;
		cp = 0;
	}
	else
	{
		cp = 0;
	}
	}

	return (var);
}

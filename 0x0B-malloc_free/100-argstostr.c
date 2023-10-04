#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - the function name
 * @ac: the argument counter
 * @av: the argument variable
 * Return: 0 as success
 */

char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int cp;
	char *arg;
	char *con;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	a = 0;
	for (b = 0; b < ac; b++)
	{
		arg = av[b];
		while (*arg != '\0')
		{
			a++;
			arg++;
		}
	a++;
	}
	con = (char *)malloc((a + 1) * sizeof(char));

	if (con != NULL)
	{
		cp = 0; 
		for (b = 0; b < ac; b++)
		{
			arg = av[b];
				while (*arg != '\0')
				{
					con[cp] = *arg;
					cp++;
					arg++;
				}
			con[cp] = '\n';
			cp++;
		}
		con[cp] = '\0';
	}
	return (con);
}


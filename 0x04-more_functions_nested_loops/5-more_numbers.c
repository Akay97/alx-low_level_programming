#include <stdio.h>
#include "main.h"

/**
 * more_numbers - the code function name
 *
 * Return: always 0 as success
 */
void more_numbers(void)
{
int a;
int b;

	for (a =  1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b <= 14)
			{
				putchar('1');
				putchar(b % 10 + '0');
			}
		}
	}
	putchar('\n');
}

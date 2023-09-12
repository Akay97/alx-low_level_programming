#include "main.h"

/**
 * _islower - the fuction check if the char is a lower case
 *
 * @c: the chhar to check for lower case
 *
 * Return: 1 if c is lowercase, ortherwise (0) is returned
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}

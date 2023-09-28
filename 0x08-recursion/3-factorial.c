#include <stdio.h>

/**
 * factorial - the function name
 * @n: the integer which holds the value
 * Return: 0 always success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((n == 0) || (n == 1))
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

#include <stdio.h>

/**
 * _pow_recursion - the function name
 * @x: the first integer
 * @y: the second integer
 * Return: 0 always success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

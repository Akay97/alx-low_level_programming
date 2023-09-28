#include <stdio.h>


/**
 * _sqrt_recursion_sq - the function name
 * @a: the first integer
 * @b: the second integer
 * @n: the number which square root will be returned
 * Return: 0 always success
 */

int _sqrt_recursion_sq(int n, int a, int b)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_sq(n, a + 1, b));
	}
}

/**
 * _sqrt_recursion - the function name
 * @n: the number which square root will be returned
 * Return: 0 always success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_sq(n, 0, n));
}

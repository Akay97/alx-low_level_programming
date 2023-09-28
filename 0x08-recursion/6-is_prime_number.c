#include <stdio.h>

/**
 * is_prime_recursive - the function name
 * @n: the variable that stores the integer
 * @a: the second integer
 * Return: 0 always success
 */

int is_prime_recursive(int n, int a)
{
	if (n <= 1)
	{
		return (0);
	}
	if (a == 1)
	{
		return (1);
	}
	if (n % a == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, a - 1));
}

/**
 * is_prime_number - the function name
 * @n: the variable that stores the integer
 * Return: 0 always success
 */

int is_prime_number(int n)
{
	int a = n / 2;

	return (is_prime_recursive(n, a));
}

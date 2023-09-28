#include <stdio.h>

/**
 * is_prime_number - the function name
 * @n: the variable that stores the integer
 * Return: 0 always success
 */

int is_prime_number(int n)
{
	int a;

	if (n <= 1)
	{
		return (0);
	}
	for (a = 2; a * a <= n; a++)
	{
		if (n % a == 0)
		{
			return (0);
		}
	}
	return (1);
}

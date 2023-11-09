#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - the function name
 * @n: the constant integer
 * Return: the sum of the
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	unsigned int i;
	int sum;

	sum = 0;

	va_start(al, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(al, int);
	}
	va_end(al);
	return (sum);
}

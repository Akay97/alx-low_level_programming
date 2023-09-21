#include <stdio.h>

/**
 * reverse_array - the function name
 * @a: the array to be reversed
 * @n: the number of elements of the array
 * Return: Always 0 as success
 */

void reverse_array(int *a, int n)
{
	int b = 0;
	int d;
	int c = n - 1;

	while (b < c)
	{
		d = a[b];
		a[b] = a[c];
		a[c] = d;

		b++;
		c--;
	}
}

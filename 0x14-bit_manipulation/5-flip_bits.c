#include <stdio.h>

/**
 * flip_bits - the function that return the number of bits
 * @n: an integer
 * @m: the second integer
 * Return: the number of integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x_rst;
	unsigned int count = 0;

	x_rst = n ^ m;

	while (x_rst)
	{
		count += x_rst & 1;
		x_rst >>= 1;
	}
	return (count);
}

#include <stdio.h>

/**
 * get_bit - a function that return the value
 * of a bit at a given index
 * @n: the integer
 * @index: the index from 0
 * Return: the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mk;
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mk = 1UL << index;
	bit = (n & mk) ? 1 : 0;
	return (bit);
}

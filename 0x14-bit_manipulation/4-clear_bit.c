#include <stdio.h>

/**
 * clear_bit - a function that set the value of a bit to 0
 * at a given point
 * @n: the integer
 * @index: the index
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}

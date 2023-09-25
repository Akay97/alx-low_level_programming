#include <stdio.h>

/**
 * print_diagsums - the function name
 * @a: the interger variable
 * @size: the size of the interger
 * Return: 0 as success
 */

void print_diagsums(int *a, int size)
{
	int asum = 0;
	int bsum = 0;
	int p;

	for (p = 0; p < size; p++)
	{
		asum += *(a + p * size + p);
		bsum += *(a + p * size + (size - 1 - p));
	}
	printf("%d, ", asum);
	printf("%d\n", bsum);
}

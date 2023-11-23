#include <stdio.h>

/**
 * get_endianness - a function that check for endianness
 * Return: the bytes
 */

int get_endianness(void)
{
	unsigned int num;
	char *bytep;

	num = 1;
	bytep = (char *)&num;

	return ((*bytep == 1) ? 1 : 0);
}

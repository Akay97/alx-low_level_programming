#include "main.h"

/**
 * _isdigit - the function name
 * @c: the interger to check for
 * Return: 0 always success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

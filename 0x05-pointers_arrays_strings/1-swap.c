#include "main.h"
#include <stdio.h>

/**
* swap_int - the function name
* @a: the variable to swap
* @b: the second variable to swap
* Return: 0 as success
*/

void swap_int(int *a, int *b)
{
	int val;

	val = *a;
	*a = *b;
	*b = val;
}

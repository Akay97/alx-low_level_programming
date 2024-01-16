#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - a function that check for upper case
 * @c: the charater to check for
 * Return: the integer
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower -  a function that check for lower case
 * @c: the charater to check
 * Return: the functioin
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

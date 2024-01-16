#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - a function that concatinate a string
 * @dest: the destination
 * @src: the source
 * @n: an integer
 * Return: the functiion
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

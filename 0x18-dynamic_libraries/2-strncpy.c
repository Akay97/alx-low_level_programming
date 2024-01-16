#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - a function that cpoy a string
 * @dest: the destinatiion
 * @src: the source
 * @n: the string
 * Return: the fnction
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

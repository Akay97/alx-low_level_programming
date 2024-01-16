#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - a funtion that set a memory
 * @s: a character
 * @b: the second charater
 * @n: an integer
 * Return: the function
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}

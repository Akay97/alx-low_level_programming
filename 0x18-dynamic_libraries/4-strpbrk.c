#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - the function name
 * @s: a charater
 * @accept: recieving
 * Return: the function
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

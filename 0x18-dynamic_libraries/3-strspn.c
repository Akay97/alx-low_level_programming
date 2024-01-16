#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - the function
 * @s: a charater
 * @accept: a second charater
 * Return: the functioin
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

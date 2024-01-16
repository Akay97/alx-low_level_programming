#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - the function name
 * @haystack: a charater
 * @needle: another charater
 * Return: the function
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

#include "main.h"

/**
 * _isalpha - a function that check for alphabeth character
 * @c: th checking for this charater
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise return 0
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <stdio.h>

/**
 * main - a defined function
 *
 * Return: returning (0) will be success
 */
int main(void)
{
char lower;
char upper;
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (lower = 'A'; lower <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}

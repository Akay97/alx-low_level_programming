#include <stdio.h>

/**
 * main - a defined function
 *
 * Return: returning (0) will be success
 */
int main(void)
{
char n;
char u;
	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}

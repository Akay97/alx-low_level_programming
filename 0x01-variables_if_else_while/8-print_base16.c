#include <stdio.h>

/**
 * main - entry point
 *
 * Return: success is (0)
 */
int main(void)
{
int m;
char n;
	for (m = 0; m < 10; m++)
	{
		putchar('0' + m);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

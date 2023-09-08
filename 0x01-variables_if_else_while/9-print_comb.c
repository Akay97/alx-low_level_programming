#include <stdio.h>

/**
 * main - entry point of the code
 *
 * Return: success is (0)
 */
int main(void)
{
int m;
	for (m = 0; m < 10; m++)
	{
		putchar('0' + m);
		if (m < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

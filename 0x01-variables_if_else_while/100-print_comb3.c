#include <stdio.h>

/**
 * main - the entry to the code
 *
 * Return: (0) as success
 */
int main(void)
{
int n;
int m;
	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar('0' + n);
			putchar('0' + m);
				if (n != 8 || m != 9)
				{
				putchar(',');
				putchar(' ');
				}
		}
	}
		putchar('\n');
	return (0);
}

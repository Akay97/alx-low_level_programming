#include <stdio.h>

/**
 * main - the entry. a function declaration
 *
 * Return: (0) signifies success
 */
int main(void)
{
int n;
int m;
int v;
	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (v = m + 1; v < 10; v++)
			{
				putchar('0' + n);
				putchar('0' + m);
				putchar('0' + v);
					if (n != 7 || m != 8 || v != 9)
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}

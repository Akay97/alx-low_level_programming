#include <stdio.h>

/**
 * main - the entry. a defined function
 *
 * Return: (0) si success
 */
int main(void)
{
int n;
int m;
	for (n = 0; n < 100; n++)
	{
		for (m = n + 1; m < 100; m++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');

			putchar((m / 10) + '0');
			putchar((m % 10) + '0');

				if (n != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}

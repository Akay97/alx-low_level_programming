#include <stdio.h>

/**
 * main - the code function
 *
 * Return: 0 as success
 */
int main(void)
{
	int b;
	long long a[50];

	a[0] = 1;
	a[1] = 2;

	for (b = 2; b < 50; b++)
	{
		a[b] = a[b - 1] + a[b - 2];
	}
	for (b = 0; b < 50; b++)
	{
		printf("%lld", a[b]);
		if (b < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

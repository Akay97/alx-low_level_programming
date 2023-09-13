#include <stdio.h>

/**
 * main - the function of the code
 *
 * Return: 0 is success
 */
int main(void)
{
int a, b, c;

	for (a = 0; a <= 1024; a += 3)
	{
		printf("%d", a);
	}
	for (b = 0; b <= 1024; b += 5)
	{
		printf("%d", b);
	}

	c = a + b;
	printf("%d\n", c);
	return (0);
}

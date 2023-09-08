#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a defined function
 *
 * Return: (0) means success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 15) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 15);
	}
	else if ((n % 15) < 6 && (n % 15) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 15);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 15);
	}
	return (0);
}

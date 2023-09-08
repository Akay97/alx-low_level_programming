#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the entry of the code. it contains a defined function
 *
 * Return: returning (0) signifies success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

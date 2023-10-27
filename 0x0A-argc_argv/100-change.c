#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function name
 * @argc: the length of the function
 * @argv: the number of argument assigned to the command
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	int cents, coins[7], num_coins, i, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins[7] = {25, 10, 5, 2, 1};
	num_coins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}

	printf("%d\n", count);

	return (0);
}


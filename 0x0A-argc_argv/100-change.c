#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	int n_coins, cents, coins, n_coins, i;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    coins[] = {25, 10, 5, 2, 1};
    n_coins = sizeof(coins) / sizeof(coins[0]);
    n_c = 0;

    for (i = 0; i < n_coins && cents > 0; i++)
    {
        n_c += cents / coins[i];
        cents %= coins[i];
    }

    printf("%d\n", n_c);
    return 0;
}



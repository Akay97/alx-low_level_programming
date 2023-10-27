#include <stdio.h>
#include <ctype.h>

/**
 * main - the function name
 * @argc: the argument count
 * @argv: the argument variable
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	int sum;
	int num;
	int j;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = 0;
		j = 0;

		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		num = num * 10 + (argv[i][j] - '0');
		j++;
		}

	sum += num;
	}

	printf("%d\n", sum);

	return (0);
}


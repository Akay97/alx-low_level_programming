#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function name
 * @argc: the arguments counts
 * @argv: the array pointinf to the arguments
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	int bytes, dex;
	int (*add)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
		bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (dex = 0; dex < bytes; dex++)
	{
		opcode = *(unsigned char *)add;
		printf("%.2x", opcode);

	if (dex == bytes - 1)
	{
		continue;
		printf(" ");
	
	}
	add++;
	}
	printf("\n");
	return (0);
}


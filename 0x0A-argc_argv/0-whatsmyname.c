#include <stdio.h>

/**
 * main - the function name
 * @argc: the argument count
 * @argv: the command argument variable
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{

	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}


#include <stdio.h>

/**
 * main - the function name
 * @argc: the argument count
 * @argv: the argument variable
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 1; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}

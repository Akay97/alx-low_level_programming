#include <stdio.h>

/**
 * print_chessboard - the function name
 * @a: the  character to be printed
 * Return: 0 as success
 */

void print_chessboard(char (*a)[8])
{
	int c;
	int b;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			putchar(a[c][b]);
		}
		putchar('\n');
	}
}

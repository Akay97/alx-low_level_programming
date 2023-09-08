#include <stdio.h>

/**
 * main - the entry point
 *
 * Return: (0) is success
 */
int main(void)
{
char com;
	for (com = 'a'; com <= 'z'; com++)
	{
	if (com != 'q' && com != 'e')
		{
		putchar(com);
		}
	}
		putchar('\n');
	return (0);
}

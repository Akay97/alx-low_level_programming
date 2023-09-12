#include "main.h"

/**
 * print_alphabet - the code function
 *
 * Return: (0) means success
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}

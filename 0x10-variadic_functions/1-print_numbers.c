#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - the function that prints some numbers
 * @separator: the seprator of the numbers
 * @n: the integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list itg;
	unsigned int dex;

	va_start(itg, n);

	for (dex = 0; dex < n; ++dex)
	{
		printf("%d", va_arg(itg, int));

		if (separator != NULL && dex < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(itg);
}

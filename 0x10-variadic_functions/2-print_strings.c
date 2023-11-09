#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - the functioin that print strings
 * @separator: the separator of the string
 * @n: the integer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str1;
	char *str2;
	unsigned int dex;

	va_start(str1, n);
	for (dex = 0; dex < n; dex++)
	{
		str2 = va_arg(str1, char *);
		if (str2 == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str2);
		}
		if (dex != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str1);
}

#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - a function that print all
 * @format: the format of the string to print
 */

void print_all(const char * const format, ...)
{
	char *separator;
	unsigned int i;
	char current_char;
	va_list args;

	va_start(args, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
	current_char = format[i];
		switch (current_char)
		{
			case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
			case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
			case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
			case 's':
			{
				char *str = va_arg(args, char *);

				if (str == NULL)
				printf("%s(nil)", separator);
				else
				printf("%s%s", separator, str);
			}
		break;
		default:
		break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}


#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string pritns between numbers
 * @n: integers passed to the funtion
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;

	unsigned int i = 0;

	char *palabra;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		palabra = va_arg(arguments, char*);
		if (palabra == NULL)
		{
			printf("%s", "(nil)");
		}
		else
			printf("%s", palabra);

		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	va_end(arguments);

	printf("\n");
}

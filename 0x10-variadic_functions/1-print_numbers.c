#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers and a new line
 * @separator: string pritns between numbers
  * @n: integers passed to the funtion
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, int));
		if (separator == NULL)
		{
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	va_end(arguments);

	printf("\n");
}

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: input
 **/

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *palabra;
	va_list arguments;

	va_start(arguments, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arguments, int));
				break;
			case 'i':
				printf("%i", va_arg(arguments, int));
				break;
			case 'f':
				printf("%f", va_arg(arguments, double));
				break;
			case 's':
				palabra = va_arg(arguments, char*);
				if (palabra == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", palabra);
				break;
		}
		j = i + 1;
		if ((format[i] ==  'c' ||
		format[i] == 'i' || format[i] == 'f' || format[i] == 's') &&
		(format[j] != '\0'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(arguments);
	printf("\n");
}

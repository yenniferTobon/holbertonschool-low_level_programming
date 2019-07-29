#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: input
 **/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *palabra;
	va_list arguments;

	va_start(arguments, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
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
		if ((format[i] ==  'c' || format[i] == 'i' || format[i] == 'f'
		|| format[i] == 's') && (format[i + 1] != '\0'))
			printf(", ");
		i++;
	}
	va_end(arguments);
	printf("\n");
}

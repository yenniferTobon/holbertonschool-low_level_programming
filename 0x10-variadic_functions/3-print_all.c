#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format:
 **/

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	va_list arguments;
	va_start(arguments, format);
	char *palabra;

	while(format[i] != '\0')
	{
		switch(format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(arguments, int));
				break;
			case 'i':
				printf("%d", va_arg(arguments, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(arguments, double));
				break;
			case 's':
				palabra = va_arg(arguments, char*);
				if (palabra == NULL)
					printf("%s", "(nil)");
				printf("%s", palabra);
				break;
		}
		j = i + 1;
		int sw = 0;

		while(format[j] != '\0')
		{
			if ((format[i] ==  'c' ||
			format[i] == 'i' || format[i] == 'f' || format[i] == 's') &&
			(format[j] == 'c' || format[j] == 'i' || format[j] == 'f' || format[j] == 's'))
			{
				sw = 1;
				break;
			}
			j++;
		}
		switch(sw)
		{
			case 1:
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(arguments);
}

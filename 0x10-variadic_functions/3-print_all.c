#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_comma - Struct op
 * @format: The operatori
 * @i: counter
 *
 * Return: return func
 */
void print_comma(const char *format, int i)
{
int j;

j = i + 1;
while ((format[j] != '\0') && (format[i] == 'c' || format[i] == 'i' ||
format[i] == 's' || format[i] == 'f'))
{
	if  (format[j] == 'c' || format[j] == 'i' ||
format[j] == 's' || format[j] == 'f')
	{
		printf(", ");
		break;
	}
j++;
}
}
/**
 * print_all - Struct op
 * @format: The operator
 *
 * Return: return func
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *vble;
va_list vprint;

va_start(vprint, format);
while (format[i] != '\0' && format != NULL)
{
	switch (format[i])
{
		case 'c':
			printf("%c", va_arg(vprint, int));
			break;
		case 'i':
			printf("%i", va_arg(vprint, int));
			break;
		case 'f':
			printf("%f", va_arg(vprint, double));
			break;
		case 's':
			vble   = va_arg(vprint, char*);
			if (vble == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", vble);
			break;
}
print_comma(format, i);
i++;
}
va_end(vprint);
printf("\n");
}



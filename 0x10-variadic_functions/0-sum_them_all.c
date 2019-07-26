#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: known parameter
 **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int suma = 0;

	va_list argumentos;
	va_start(argumentos, n);

	for (i = 0; i < n; i++)
	{
		suma = suma + va_arg(argumentos, int);
	}
	va_end(argumentos);
	return (suma);
}


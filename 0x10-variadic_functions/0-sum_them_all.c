#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all-sum of all its parameters
 * @n: known parameter
 * Return: int suma add parameters
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list argumentos;

	unsigned int i = 0;
	int suma = 0;

	if (n == 0)
		return (0);

	va_start(argumentos, n);

	for (i = 0; i < n; i++)
	{
		suma = suma + va_arg(argumentos, int);
	}
	va_end(argumentos);
	return (suma);
}


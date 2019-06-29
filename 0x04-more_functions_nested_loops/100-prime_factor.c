#include "holberton.h"
#include <stdio.h>

/**
 * main - paint number prime factor of the number 612852475143
 * 
 */

int main(void)
{
	long numPrimo = 612852475143, i = 0;

	for (i = 2; i < numPrimo; i++)
	{
		if (numPrimo % i == 0)
		{
			numPrimo = numPrimo / i;
			i = 1;
		}
	}
	printf("%lu\n", numPrimo);
	return (0);
}

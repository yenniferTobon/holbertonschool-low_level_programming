#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 * Return: int factorial
 */

int factorial(int n)
{
	int factori = 1;

	if (n > 0)
	{
		factori = n * (factorial(n - 1));
	}
	else if (n == 0)
		factori = 1;
	else
		factori = -1;

	return (factori);
}

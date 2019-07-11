#include "holberton.h"

/**
* funPrimo - Checks if number has divisors different from 1 and n.
* @d: Divisor
* @n: Number
* Return: int
*/

int funPrimo(int d, int n)
{
	if (n % d == 0)
		return (0);
	else if (n / 2 > d)
		return (funPrimo(d + 2, n));
	else
		return (1);
}

/**
* is_prime_number - Checks if the input integer is a prime number.
* @n: Number to check.
* Return: int
*/

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);
	else
		return (funPrimo(3, n));
}

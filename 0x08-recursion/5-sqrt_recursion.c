#include "holberton.h"

/**
* funsqrt - function recursive that return natural square
* @n: number original input
* @m: number original half input
* Return: int square
*/

int funsqrt(int n, int m)
{
	if (m <= 0)
	{
		return (-1);
	}
	else if ((m * m) == n)
	{
		return (m);
	}
	else
	{
		return (funsqrt(n, m - 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number input
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int numRaiz = 0;

	numRaiz = funsqrt(n, (n / 2) + 1);
	return (numRaiz);
}



#include "holberton.h"

/**
* funsqrt - function recursive that return natural square
* @n: number original input
* @m: number constant input
* Return: int square
*/
int funsqrt(int n, int m)
{
	if ((m * m) == n)
	{
		return (m);
	}
	else if ((m * m) < n)
	{
		return (funsqrt(n, m + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number input
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (funsqrt(n, 1));
}

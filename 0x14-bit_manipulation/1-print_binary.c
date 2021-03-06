#include "holberton.h"

/**
 * pow2 - power
 * @b: exponente
 * Return: power number
 **/

unsigned long pow2(unsigned int b)
{
	unsigned long power = 1, i = 1;

	if (b == 0)
	{
		return (1);
	}
	for (i = 0; i < b; i++)
	{
		power = power * 2;
	}
	return (power);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: int a binary
 * Return: void
 **/
void print_binary(unsigned long int n)
{
	long i = 0, position = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (pow2(i) <= n)
		{
			i++;
		}

		if (pow2(i) != n)
		{
			i = i - 1;
		}

		while (i != -1)
		{
			if (pow2(i) <= n)
			{
				_putchar('1');
				n = n - pow2(i);
			}
			else
			{
				_putchar('0');
			}
		position++;
		i--;
		}
	}
}

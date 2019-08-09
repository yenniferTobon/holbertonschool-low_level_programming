#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n:
 * Return: void
 **/
void print_binary(unsigned long int n)
{
	int i = 0, position = 0, size = 0;
	char *binary;

	if (n == 0)
	{
		binary = malloc(sizeof(char));
		binary[0] = '0';
	}
	else
	{
		while (pow2(i) <= n)
		{
			i++;
		}
		size = i;

		binary = malloc(sizeof(char) * (i + 1));

		if (pow2(i) != n)
		{
			i = i - 1;
		}

		while (i != -1)
		{
			if (pow2(i) <= n)
			{
				binary[position] = '1';
				n = n - pow2(i);
			}
			else
			{
				binary[position] = '0';
			}
		position++;
		i--;
		}
	}

	for (i = 0; i <= size; i++)
	{
		_putchar(binary[i]);
	}
	free(binary);
}


/**
 * pow2 - power
 * @b: exponente
 * Return: power number
 **/

unsigned int pow2(unsigned int b)
{
	unsigned int power = 1, i = 1;

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


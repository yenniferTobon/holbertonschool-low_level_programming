#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer char
 * Return: int number
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int size = 0, add = 0, indice = 0;

	if (b == NULL)
		return (0);

	while (*(b + size) != '\0')
	{
		size++;
	}
	while (size != 0)
	{
		if (b[indice] == '1')
		{
			add = add + pow2(size - 1);

		}
		else if (b[indice] != '0' && b[indice] != '1')
		{
			return (0);
		}
	indice++;
	size--;
	}
	return (add);
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



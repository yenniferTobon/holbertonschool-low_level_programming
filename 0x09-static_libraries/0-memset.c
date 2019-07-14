#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: array to fill
 * @b: number to repet
 * @n: number of elements
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}


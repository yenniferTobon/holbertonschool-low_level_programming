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

	for (i = 1; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}

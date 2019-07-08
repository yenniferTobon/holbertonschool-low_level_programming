#include "holberton.h"

/**
 * *_memcpy -that copies memory area.
 * @dest: array to dest
 * @src: array to origen
 * @n: number of elements
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


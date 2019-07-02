#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char destination
 * @src: char origin
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(src + i) != '\0')
		i = i + 1;

	dest[i] = '\0';

	for (j = 0; j < i; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}


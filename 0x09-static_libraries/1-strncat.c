#include "holberton.h"

/**
 * *_strncat - concatenates two strings
 * @dest: char dest
 * @src: char a appends
 * @n: use n bytes to src
 * Return: char dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int tamanoDest = 0, l = 0;

	while (*(dest + tamanoDest) != '\0')
	{
		tamanoDest = tamanoDest + 1;
	}

	for (l = 0; src[l] != '\0'; l++)
	{
		if (l < n)
		{
			*(dest + tamanoDest) = *(src + l);
			tamanoDest = tamanoDest + 1;
		}
		else
			break;
	}
	return (dest);
}
